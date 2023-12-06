#include <string.h>
#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtok - extract tokens from strings
 * @str: string
 * @delim: delimiter
 * Return: 0
 */
int main(void)
{
	char *src = "The Festive Season";
	char *str = malloc(sizeof(char) * strlen(src));
	const char *delim = " ";
	char *token;

	strcpy(str, src);

	token = strtok(str, delim);

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}
