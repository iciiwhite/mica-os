#include "sched.h"
#include "task.h"
static task_t *current;
void sched_init(void) { current = NULL; }
void sched_start(void) { while(1) sched_yield(); }
void sched_yield(void) {
    task_t *next = task_get_next();
    if(next && next != current) {
        task_switch(next);
        current = next;
    }
}