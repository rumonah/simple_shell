#include <string.h>
#include "shell.h"
#include <stdio.h>

/**
 * main - extract tokens from strings
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "The festive Season";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	printf("%s ", delim);

	token = strtok(NULL, delim);
	printf("%s ", token);

	while 

	return (0);
}
