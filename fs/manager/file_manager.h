#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H
int file_manager_list(const char *dir, char *output, int maxlen);
int file_manager_delete(const char *path);
int file_manager_copy(const char *src, const char *dst);
#endif