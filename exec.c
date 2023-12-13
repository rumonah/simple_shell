#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"
#include <sys/wait.h>
#include <sys/types.h>

/**
 * execve - execute the program
 *
 * @argv: argument vector
 * Return:0.
 */
int execve(const char *pathname, char *const argv[])
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
