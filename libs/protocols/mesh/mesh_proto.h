#ifndef MESH_PROTO_H
#define MESH_PROTO_H
#include <stdint.h>
int mesh_encrypt(uint8_t *data, int len, uint8_t *out);
int mesh_decrypt(uint8_t *data, int len, uint8_t *out);
#endif