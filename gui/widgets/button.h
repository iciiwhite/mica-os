#ifndef BUTTON_H
#define BUTTON_H
void button_draw(int x, int y, int w, int h, const char *label, int pressed);
int button_hit(int x, int y, int w, int h, int touch_x, int touch_y);
#endif