#include <stdio.h>

/**
 * main - prints the environment
 *
 * @env: environment
 * Return: 0.
 */
char *env(const char *env)
{
	unsigned int go = 0;

	while (env[go])
	{
		printf("env[%d] = %d\n", go, env[go]);
		go++;
	}

	return (0);
}
