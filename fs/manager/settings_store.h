#ifndef SETTINGS_STORE_H
#define SETTINGS_STORE_H
int settings_save(const char *key, const char *value);
int settings_load(const char *key, char *out, int maxlen);
#endif