#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * exece - execute the program
 *
 * @argv: argument vector
 * Return:0.
 */
int exece(char *argv[])
{
	pid_t pid;

	char *r = {"/bin/ls", "-l", NULL};

	pid = fork();

	if (pid == -1)
		return (-1);

	/* Child process */

	if (pid == 0)
	{
		int r = execve(argv[0], argv, NULL);

		if (r == -1)
			perror("Error");
	}

	/* Parent process */
	else
	{
		wait(NULL);
		printf("Execve is complite\n");
	}

	return (0);
}
