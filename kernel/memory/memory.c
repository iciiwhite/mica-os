#include "memory.h"
static uint8_t heap[HEAP_SIZE];
static uint32_t heap_ptr = 0;
void memory_init(void) { heap_ptr = 0; }
void* malloc(uint32_t size) {
    if(heap_ptr + size > HEAP_SIZE) return 0;
    void *ptr = &heap[heap_ptr];
    heap_ptr += size;
    return ptr;
}
void free(void *ptr) { (void)ptr; }