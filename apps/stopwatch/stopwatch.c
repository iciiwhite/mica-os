#include "stopwatch.h"
#include "window.h"
void stopwatch_run(void) { int win=window_create("Stopwatch",0,0,200,200); eink_clear(); eink_draw_string("00:00.00",10,30,0); window_draw(win); while(!(keypad_get_key()&2048)); }