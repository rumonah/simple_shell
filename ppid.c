#include <stdio.h>
#include <unistd.h>
#include "shell.h"
#include <sys/types.h>

/**
 * main - PPID
 *
 * Return: 0
 */
int main(void)
{
	int r = 25;
	int j = 16;
	int sum = r + j;
	pid_t ppid;

	printf("sum is %d\n", sum);
	ppid = getppid();
	printf("my ppid is %d\n", ppid);

	return (0);
}
