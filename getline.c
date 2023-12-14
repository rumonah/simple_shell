#include <stdlib.h>
#include <stdio.h>
#include "shell.h"

/**
 * line - delimited string input
 * @n: size of the buffer
 * @buffer:  buffer stores the variable that is
 * supposed to be taken in (input) or output.
 * Return: 0
 */
ssize_t line(char **buffer, size_t *n)
{
	size_t r;
	char *buff = malloc(sizeof(char));

	printf("Enter name ");
	getline(&buff, &r, stdin);

	printf("Name is %sBuffer size is %ln\n", buff, n);

	free(buff);

	return (0);
}
