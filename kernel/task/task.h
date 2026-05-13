#ifndef TASK_H
#define TASK_H
#include <stdint.h>
#define MAX_TASKS 32
#define STACK_SIZE 2048
#define TASK_READY 0
typedef struct { void (*entry)(void*); void *arg; int priority; int state; uint8_t stack[STACK_SIZE]; } task_t;
void task_init(void);
int task_create(void (*entry)(void*), void *arg, int priority);
task_t* task_get_next(void);
void task_switch(task_t *next);
#endif