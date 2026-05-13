#include "image_viewer.h"
#include "window.h"
#include "eink_driver.h"
void image_viewer_show(const char *path) { (void)path; eink_clear(); eink_draw_string("Image",10,30,0); eink_refresh(); }
void image_viewer_run(void) {
    int win=window_create("Images",0,0,200,200);
    image_viewer_show("/photos/1.jpg");
    while(!(keypad_get_key() & 2048));
}