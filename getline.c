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
	char *buff = malloc(sizeof(char) * n);

	printf("Enter name");
	getline(&buff, &n, stdin);

	printf("Name is %sBuffer size is%ld\n", buff, n);

	free(buff);

	return (0);
}
