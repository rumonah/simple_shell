#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "shell.h"
#include <unistd.h>

/**
 * main - command lines with arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(void)
{
	char *cmd = NULL, *cmd_cpy = NULL, *token = NULL;
	char *delim = " \n";
	size_t r = 0;
	int argc = 0, t = 0;
	char **argv = NULL;

	printf("$ ");
	if (getline(&cmd, &r, stdin) == -1)
		return (-1);

	cmd_cpy = strdup(cmd);
	token = strtok(cmd, delim);

	while (token)
	{
		token = strtok(NULL, delim);
		argc++;
	}

	printf("%d\n", argc);

	argv = malloc(sizeof(char *) * argc);
	token = strtok(cmd_cpy, delim);

	while (token)
	{
		argv[t] = token;
		token = strtok(NULL, delim);
		t++;
	}
	argv[t] = NULL;

	t = 0;

	while (argv[t])
		printf("%s\n", argv[t++]);
	free(cmd), free(cmd_cpy), free(argv);

	return (0);
}
