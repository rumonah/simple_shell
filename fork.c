#include <stdio.h>
#include <unistd.h>
#include "shell.h"

/**
 * fork - create a child process
 *
 * Return: 0
 */
pid_t fork(void)
{
	pid_t pid;
	pid_t ppid;

	printf("Before fork I was twenty\n");

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	printf("After fork I became twenty six\n");

	if (pid == 0)
	{
		sleep(10);
		printf("My child\n");
	}
	else
	{
		ppid = getpid();
		printf("The Mother pid is: %u\n", ppid);
	}

	return (0);
}
