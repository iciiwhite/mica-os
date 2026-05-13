#include "power.h"
void power_init(void) {}
void power_idle(void) { asm volatile("wfi"); }
void power_reboot(void) { asm volatile("bkpt #0"); }
void power_shutdown(void) { while(1); }