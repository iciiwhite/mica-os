#include "animation.h"
#include "eink_driver.h"
void boot_animation(void) { for(int i=0;i<10;i++) { eink_clear(); eink_draw_string("MICA",10+i*5,100,0); eink_refresh(); timer_delay_ms(50); } }