#include "camera_driver.h"
#include "i2c.h"
#include "gpio.h"
#include "spi.h"
#include <string.h>
static uint8_t fake_frame[64*64];
void camera_init(void) {
    i2c_init();
    gpio_set_mode(20, GPIO_OUTPUT);
    gpio_write(20, 1);
    for(int i=0;i<100;i++) asm volatile("nop");
    gpio_write(20, 0);
    memset(fake_frame, 0x80, sizeof(fake_frame));
}
uint8_t* camera_capture_raw(void) {
    for(int i=0;i<sizeof(fake_frame);i++) {
        fake_frame[i] = (fake_frame[i] + 1) & 0xFF;
    }
    return fake_frame;
}
int camera_capture_jpeg(uint8_t *out, uint32_t *out_len) {
    uint8_t *raw = camera_capture_raw();
    return jpeg_encode(raw, 64, 64, out, out_len);
}