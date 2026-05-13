#include "button.h"
#include "eink_driver.h"
void button_draw(int x, int y, int w, int h, const char *label, int pressed) { (void)pressed; eink_draw_string(label, x+2, y+2, 0); }
int button_hit(int x, int y, int w, int h, int touch_x, int touch_y) { return (touch_x>=x && touch_x<x+w && touch_y>=y && touch_y<y+h); }