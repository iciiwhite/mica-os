#include "eink_driver.h"
#include "spi.h"
#include "gpio.h"
#include <string.h>
static uint8_t fb[EINK_WIDTH*EINK_HEIGHT/8];
void eink_init(void) { memset(fb,0xFF,sizeof(fb)); }
void eink_clear(void) { memset(fb,0xFF,sizeof(fb)); }
void eink_draw_pixel(int x,int y,uint8_t color) { if(x<0||x>=EINK_WIDTH||y<0||y>=EINK_HEIGHT) return; int byte=(y*EINK_WIDTH+x)/8; int bit=7-(x%8); if(color) fb[byte]|=1<<bit; else fb[byte]&=~(1<<bit); }
void eink_draw_char(char c,int x,int y,uint8_t color) { const uint8_t *g=font_get_glyph(c); for(int i=0;i<8;i++) for(int j=0;j<6;j++) if(g[i]&(1<<(7-j))) eink_draw_pixel(x+j,y+i,color); }
void eink_draw_string(const char *s,int x,int y,uint8_t color) { while(*s) { eink_draw_char(*s++,x,y,color); x+=6; } }
void eink_refresh(void) { /* stub */ }