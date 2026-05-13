#include "mesh.h"
#include "window.h"
void mesh_app(void) {
    mesh_init();
    int win=window_create("Mesh Chat",0,0,200,200);
    eink_clear();
    eink_draw_string("Mesh ready",10,30,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}