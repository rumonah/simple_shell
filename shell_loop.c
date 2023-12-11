#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - print
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

	printf("Coding has stoped");
	free(command);
	return (0);
}
