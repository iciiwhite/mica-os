#ifndef CAMERA_DRIVER_H
#define CAMERA_DRIVER_H
#include <stdint.h>
void camera_init(void);
uint8_t* camera_capture_raw(void);
int camera_capture_jpeg(uint8_t *out, uint32_t *out_len);
#endif