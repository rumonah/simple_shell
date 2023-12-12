#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int r = 0;

	for (r = 0 ; r < argc; r++);
	{
		printf("The %d argument is: %s\n", r, argv[r]);
		r++;
	}

	return (0);
}
