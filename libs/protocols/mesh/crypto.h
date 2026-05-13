#ifndef CRYPTO_H
#define CRYPTO_H
#include <stdint.h>
void aes_encrypt(const uint8_t *key, const uint8_t *input, uint8_t *output);
void aes_decrypt(const uint8_t *key, const uint8_t *input, uint8_t *output);
#endif