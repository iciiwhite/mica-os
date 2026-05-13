#include "task.h"
static task_t tasks[MAX_TASKS];
static int task_count = 0;
void task_init(void) { task_count = 0; }
int task_create(void (*entry)(void*), void *arg, int priority) {
    if(task_count >= MAX_TASKS) return -1;
    tasks[task_count].entry = entry;
    tasks[task_count].arg = arg;
    tasks[task_count].priority = priority;
    tasks[task_count].state = TASK_READY;
    tasks[task_count].stack = malloc(STACK_SIZE);
    task_count++;
    return 0;
}
task_t* task_get_next(void) { static int idx=0; idx=(idx+1)%task_count; return &tasks[idx]; }
void task_switch(task_t *next) { asm volatile("svc 0"); }