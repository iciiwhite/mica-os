#ifndef SDP_H
#define SDP_H
#include <stdint.h>
void sdp_init(void);
int sdp_register_service(uint16_t uuid);
#endif