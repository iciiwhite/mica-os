#include "file_manager.h"
#include "window.h"
void file_manager_app(void) {
    int win=window_create("Files",0,0,200,200);
    char list[256];
    file_manager_list("/", list, 256);
    eink_clear();
    eink_draw_string(list,10,30,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}