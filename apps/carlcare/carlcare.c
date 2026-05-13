#include "carlcare.h"
#include "window.h"
void carlcare_run(void) {
    int win=window_create("Carlcare",0,0,200,200);
    eink_clear();
    eink_draw_string("Diagnostics",10,30,0);
    eink_draw_string("Battery: 100%",10,50,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}