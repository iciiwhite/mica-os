#include "ip.h"
uint16_t ip_checksum(uint16_t *data, int len) { uint32_t sum=0; for(int i=0;i<len/2;i++) sum+=data[i]; while(sum>>16) sum=(sum&0xFFFF)+(sum>>16); return ~sum; }
int ip_send(uint32_t dst, uint8_t proto, uint8_t *data, int len) { (void)dst; (void)proto; (void)data; (void)len; return -1; }