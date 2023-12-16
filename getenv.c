#include <stdio.h>
#include "shell.h"
#include <stdlib.h>

/**
 * getenv - print all or part of environment
 * @env: string that contains the name of the environment variable
 * Return: NULL if no match, pointer to the value of variable
 */

char *getenv(const char *env)
{
	int b = 0;

	while (env[b])
	{
		printf("env[%d] = %d\n", b, env[b]);
		b++;
	}

	return (0);
}
