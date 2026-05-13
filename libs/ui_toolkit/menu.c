#include "menu.h"
#include "eink_driver.h"
#include "keypad_driver.h"
int menu_run(const char *title, char *items[], int count) {
    int selected=0;
    while(1) {
        eink_clear();
        eink_draw_string(title,0,0,0);
        for(int i=0;i<count;i++) {
            eink_draw_string(items[i],10,20+i*10,i==selected?0:1);
        }
        eink_refresh();
        uint16_t key=keypad_get_key();
        if(key & 1) selected = (selected+count-1)%count;
        if(key & 2) selected = (selected+1)%count;
        if(key & 4) return selected;
        if(key & 8) return -1;
    }
}