#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - write a program that prints "$ "
 * wait for the user to enter a command
 * prints it on the next line.
 * Return: 0
 */
int main(void)
{
	char *command = NULL;
	size_t length = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&command, &length, stdin);

		if (read == -1)
		{
			printf("Coding has started");
			free(command);
			return (-1);
		}

		printf("Begin here %s", command);
	}

	printf("Coding has stopped");
	free(command);
	return (0);
}
