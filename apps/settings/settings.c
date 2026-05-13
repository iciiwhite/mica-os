#include "settings.h"
#include "window.h"
void settings_run(void) {
    int win=window_create("Settings",0,0,200,200);
    eink_clear();
    eink_draw_string("Volume: 5",10,30,0);
    eink_draw_string("Theme: Default",10,50,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}