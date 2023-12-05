#ifndef SHELL_H
#define SHELL_H

int main(void);
char *strtok(char *str, const char *delim);
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

#endif

