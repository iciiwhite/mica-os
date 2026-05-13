#include "irq.h"
#include "sched.h"
void irq_handler(void) {
    sched_yield();
}
void irq_enable(void) { asm volatile("cpsie i"); }
void irq_disable(void) { asm volatile("cpsid i"); }