#include "calendar.h"
#include "window.h"
void calendar_run(void) { int win=window_create("Calendar",0,0,200,200); eink_clear(); eink_draw_string("Jan 1, 2025",10,30,0); window_draw(win); while(!(keypad_get_key()&2048)); }