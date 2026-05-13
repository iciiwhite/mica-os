#include "task.h"
#include "ipc.h"
#include "memory.h"
#include "power.h"
#include "sched.h"
void kernel_main(void) {
    memory_init();
    task_init();
    ipc_init();
    power_init();
    sched_init();
    task_create(main_task, NULL, 1);
    sched_start();
    while(1);
}
void main_task(void *arg) {(void)arg; while(1) power_idle();}