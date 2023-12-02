#ifndef SHELL_H
#define SHELL_H

int main(void);
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);i

#endif

