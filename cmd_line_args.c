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
	int argc, t = 0;
	char **argv = NULL;

	printf("$ ");
	if (getline(&cmd, &r, stdin) == -1)
		return (-1);

	cmd_cpy = strdup(cmd);
	token = strtok(cmd, delim);

	while (cmd[t])
	{
		if (cmd[t] == '\n')
			printf("\\n ---> Input has %ld characters", strlen(cmd));
		else
			printf("%c", cmd[t]);
		t++;
	}
	return (0);
}
