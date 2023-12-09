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
	size_t n = 26;
	char *buff = malloc(sizeof(char) * n);

	printf("Enter name");
	getline(&buff, &n, stdin);

	printf("Name is %sBuffer size is%ld\n", buff, n);

	free(buff);

	return (0);
}
