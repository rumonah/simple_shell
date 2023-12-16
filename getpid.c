#include <stdio.h>
#include <unistd.h>
#include "shell.h"
#include <sys/types.h>

/**
 * getpid - Process ID
 *
 * Return: 0
 */
pid_t getpid(void)
{
	int r = 5;
	int j = 7;
	int sum = r + j;
	pid_t pid;

	printf("sum is %d\n", sum);
	pid = getpid();
	printf("my pid is %d\n", pid);

	return (0);
}
