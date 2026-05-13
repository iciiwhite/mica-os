#include "camera_driver.h"
void test_camera_init(void) { camera_init(); }
void test_camera_capture(void) { uint8_t *frame = camera_capture_raw(); (void)frame; }