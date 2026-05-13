#include "explorer.h"
#include "file_manager.h"
void explorer_browse(const char *path) { char list[1024]; file_manager_list(path,list,1024); int win=window_create("Explorer",0,0,200,200); eink_clear(); eink_draw_string(list,10,30,0); window_draw(win); while(!(keypad_get_key()&2048)); }