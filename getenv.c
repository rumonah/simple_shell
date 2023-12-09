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
	char **environ;
	size_t r = strlen(env);

	if (!env)
		return (NULL);
	while (*environ)
	{
		if (strncmp(*environ, env, r) == 0)
			environ++;
		return (*environ);
	}

	return (NULL);
}
