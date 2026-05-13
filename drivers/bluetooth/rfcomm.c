#include "rfcomm.h"
void rfcomm_init(void) {}
int rfcomm_listen(int channel) { (void)channel; return -1; }
int rfcomm_connect(const char *addr, int channel) { (void)addr; (void)channel; return -1; }