#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * main - wait for process to change state
 * Return: 0.
 */

int main(void)
{
	pid_t p;

	/* creating the child process */
	p = fork();

	/* if the fork fails */
	if (p == -1)
	{
		perror("Not successful\n");
		return (1);
	}

	/* child process */
	if (p == 0)
	{
		printf("The child process\n");
	}

	/* parent process */
	else
	{
		wait(NULL);
		sleep(40);
		printf("The Parent Process\n");
	}

	return (0);
}
