#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(void)
{
	size_t size = 0;
	char *prompt = "(shell)>$ ";

	printf("%s", prompt);
	getline(&buffer, &size, stdin);

	printf("%s\n", buffer);

	free(buffer);
	return (0);
}
