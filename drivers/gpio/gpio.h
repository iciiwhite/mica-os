#ifndef GPIO_H
#define GPIO_H
#define GPIO_OUTPUT 0
#define GPIO_INPUT 1
#define GPIO_INPUT_PULLDOWN 2
void gpio_set_mode(int pin, int mode);
void gpio_write(int pin, int val);
int gpio_read(int pin);
#endif