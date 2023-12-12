#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - stat example
 * @ac: argument count
 * @av: argument vector
 * Return: 0.
 */
int main(int ac, char **av)
{
	unsigned int small;
	struct stat r;

	if (ac < 2)
	{
		printf("Usage: %s coding_file ...\n", av[0]);
		return (1);
	}

	small = 1;

	while (av[small])
	{
		printf("%s:", av[small]);
		if (stat(av[small], &r) == 0)
		{
			printf(" Awesome Coding\n");
		}
		else
		{
			printf(" Patience pays\n");
		}

		small++;
	}

	return (0);
}
