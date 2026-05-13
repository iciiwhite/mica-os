#include "crypto.h"
#include <string.h>
void aes_encrypt(const uint8_t *key, const uint8_t *input, uint8_t *output) {
    (void)key; (void)input;
    memcpy(output, input, 16);
}
void aes_decrypt(const uint8_t *key, const uint8_t *input, uint8_t *output) {
    (void)key; (void)input;
    memcpy(output, input, 16);
}