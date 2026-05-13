#include "notes.h"
#include "window.h"
void notes_run(void) {
    int win=window_create("Notes",0,0,200,200);
    eink_clear();
    eink_draw_string("Your note here",10,30,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}