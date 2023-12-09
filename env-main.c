#include <stdio.h>

/**
 * main - prints the environment
 * @ac: argument count
 * @av: argument vector
 * @env: environment
 * Return: 0.
 */
int main(int ac, char **av, char **env)
{
	unsigned int go = 0;

	while (env[go] != NULL)
	{
		printf("%s\n", env[go]);
		go++;
	}

	return (0);
}
