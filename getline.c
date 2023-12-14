#include <stdlib.h>
#include <stdio.h>
#include "shell.h"

/**
 * line - delimited string input
 * @n: size of the buffer
 * @lineptr: addree of buffer created
 * Return: 0
 */
ssize_t line(char **lineptr, size_t *n)
{
	size_t r;;
	char *buff = malloc(sizeof(char));

	printf("Enter name ");
	getline(&buff, &r, stdin);

	printf("Name is %sBuffer size is %ln\n", buff, n);

	free(buff);

	return (0);
}
