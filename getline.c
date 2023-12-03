#include <stdlib.h>
#include <stdio.h>
#include "shell.h"

ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
	ssize_t n = 30;
	char *lineptr = malloc(sizeof(char) *n);

	printf("Enter name ");
	getline(&lineptr, &n, stdin);

	printf("Name is %sBuffer size is%ld\n", lineptr, n);

	free(lineptr);

	return (0);
}
