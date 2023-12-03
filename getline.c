#include <stdlib.h>
#include <stdio.h>
#include "shell.h"
/**
 * main - getline
 *
 * Return: 0
 */
int main(void)
{
	ssize_t n = 10;
	char *lineptr = malloc(sizeof(char) * n);

	printf("Enter name");
	getline(&lineptr, &n, stdin);

	printf("Name is %sBuffer size is%ld\n", lineptr, n);

	free(lineptr);

	return (0);

	{
		ssize_t n = 10;
		char *lineptr = NULL;

		printf("Enter name");
		getline(&lineptr, &n, stdin);

		printf("Name is %sBuffer size is%ld\n", lineptr, n);

		free(lineptr);

		return (0);
	}
}
