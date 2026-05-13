#ifndef LED_H
#define LED_H
void led_init(void);
void led_set(int led, int on);
void led_blink(int led, int ms);
#endif