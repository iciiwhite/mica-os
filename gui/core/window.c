#include "window.h"
#include "eink_driver.h"
window_t windows[MAX_WINDOWS];
int window_count=0;
void gui_init(void) { eink_init(); window_count=0; }
int window_create(const char *title, int x, int y, int w, int h) { if(window_count>=MAX_WINDOWS) return -1; windows[window_count].x=x; windows[window_count].y=y; windows[window_count].w=w; windows[window_count].h=h; window_count++; return window_count-1; }
void window_draw(int id) { if(id>=window_count) return; eink_draw_string(windows[id].title, windows[id].x, windows[id].y, 0); eink_refresh(); }