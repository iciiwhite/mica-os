#ifndef MESH_H
#define MESH_H
#include <stdint.h>
void mesh_init(void);
int mesh_send(uint8_t *data, int len);
int mesh_recv(uint8_t *buf, int maxlen);
#endif