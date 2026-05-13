#include "camera_app.h"
#include "camera_driver.h"
#include "window.h"
#include "keypad_driver.h"
#include "eink_driver.h"
#include "file_manager.h"
#include "jpeg_encoder.h"
#include "rtc.h"
#include <string.h>
void camera_app_run(void) {
    camera_init();
    int win = window_create("Camera", 0, 0, EINK_WIDTH, EINK_HEIGHT);
    int preview_mode = 1;
    uint8_t *jpeg_buf = malloc(65536);
    while(1) {
        if(preview_mode) {
            uint8_t *frame = camera_capture_raw();
            for(int y=0; y<64; y++) {
                for(int x=0; x<64; x++) {
                    uint8_t gray = frame[y*64+x];
                    eink_draw_pixel(x, y, gray > 128);
                }
            }
            eink_refresh();
        }
        uint16_t key = keypad_get_key();
        if(key & 1) {
            uint32_t len = jpeg_buf ? 65536 : 0;
            if(camera_capture_jpeg(jpeg_buf, &len) == 0) {
                char filename[64];
                uint32_t ts = rtc_get_timestamp();
                snprintf(filename, 64, "/photos/%u.jpg", ts);
                int fd = fat32_open(filename);
                if(fd >= 0) {
                    fat32_write(fd, jpeg_buf, len);
                    fat32_close(fd);
                }
                eink_clear();
                eink_draw_string("Saved", 10, 30, 0);
                eink_refresh();
                for(int i=0;i<500000;i++) asm volatile("nop");
            }
        }
        if(key & 2) preview_mode = !preview_mode;
        if(key & 2048) break;
    }
    free(jpeg_buf);
}