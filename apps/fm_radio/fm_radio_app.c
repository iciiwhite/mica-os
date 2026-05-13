#include "fm_radio.h"
#include "window.h"
void fm_radio_app(void) {
    fm_radio_init();
    fm_radio_tune(1011);
    fm_radio_volume(5);
    fm_radio_start();
    int win=window_create("FM Radio",0,0,200,200);
    while(1) {
        eink_clear();
        eink_draw_string("FM 101.1 MHz",10,30,0);
        window_draw(win);
        if(keypad_get_key() & 2048) break;
    }
    fm_radio_stop();
}