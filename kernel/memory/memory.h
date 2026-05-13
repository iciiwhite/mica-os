#ifndef MEMORY_H
#define MEMORY_H
#include <stdint.h>
extern uint32_t HEAP_SIZE;
void memory_init(void);
void* malloc(uint32_t size);
void free(void *ptr);
#endif