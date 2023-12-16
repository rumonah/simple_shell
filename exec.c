#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * main - execute the program
 * Return:0.
 */
int main(void)
{
	pid_t pid;

	char *argv[] = {"/bin/ls", "-l", NULL};

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
