#include <stdio.h>
#include <stdlib.h>

/**
 * argum - print the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int argum(int argc, char **argv)
{
	int r = 0;

	while (r < argc)
	{
		printf("The %d argument is: %s\n", r, argv[r]);
		r++;
	}

	return (0);
}
