#include "keypad_driver.h"
#include "gpio.h"
static const int row_pins[4]={0,1,2,3};
static const int col_pins[4]={4,5,6,7};
static uint16_t last=0,deb=0;
void keypad_init(void) { for(int i=0;i<4;i++) { gpio_set_mode(row_pins[i],GPIO_OUTPUT); gpio_write(row_pins[i],0); gpio_set_mode(col_pins[i],GPIO_INPUT_PULLDOWN); } }
uint16_t keypad_scan(void) { uint16_t s=0; for(int r=0;r<4;r++) { gpio_write(row_pins[r],1); for(int c=0;c<4;c++) if(gpio_read(col_pins[c])) s|=1<<(r*4+c); gpio_write(row_pins[r],0); } return s; }
uint16_t keypad_get_key(void) { uint16_t cur=keypad_scan(); uint16_t pressed=cur&~last; last=cur; return pressed; }