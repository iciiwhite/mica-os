#ifndef WINDOW_H
#define WINDOW_H
#define MAX_WINDOWS 16
typedef struct { char title[32]; int x,y,w,h; } window_t;
void gui_init(void);
int window_create(const char *title, int x, int y, int w, int h);
void window_draw(int id);
#endif