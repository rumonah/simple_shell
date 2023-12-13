#include <stdlib.h>
#include <stdio.h>
#include "shell.h"

/**
 * getline - delimited string input
 * @n: size of the buffer
 * @lineptr: addree of buffer created
 * @stream: stdin
 * Return: 0
 */
ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t *n = 26;
	char *buff = malloc(sizeof(char) * n);

	printf("Enter name");
	getline(&buff, &n, stdin);

	printf("Name is %s Buffer size is %ld\n", buff, n);

	free(buff);

	return (0);
}
