#ifndef EINK_DRIVER_H
#define EINK_DRIVER_H
#include <stdint.h>
#define EINK_WIDTH 200
#define EINK_HEIGHT 200
void eink_init(void);
void eink_clear(void);
void eink_draw_pixel(int x,int y,uint8_t color);
void eink_draw_char(char c,int x,int y,uint8_t color);
void eink_draw_string(const char *str,int x,int y,uint8_t color);
void eink_refresh(void);
#endif