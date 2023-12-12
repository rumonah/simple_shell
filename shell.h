#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <sys/types.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(void);
void print_tokens(char str[], char *delim);
void print(const char *command);
char *getenv(const char *env);
extern char **environ;
void non_interactive();
void interactive();

#endif /* SHELL_H*/
