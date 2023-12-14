#include "shell.h"
#include <unistd.h>

void interactive(void);
void non_interactive(void);

/**
 * main - prints the shell program
 *
 * Return: 0
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		printf("Nice work\n");
		interactive();
	}
	else
	{
		printf("codestar\n");
		non_interactive();
	}

	printf("NOW\n");

	return (0);
}

/**
 * interactive - shell works in a interactive mode
 */
void interactive(void)
{
	char *input, *token = NULL;
	size_t r = 0;
	char delim[] = {'\n', '\t', ' '};
	char **array = NULL;

	printf("$ ");

	if (getline(&input, &r, stdin) == -1)
	{
		free(input);
		exit(EXIT_FAILURE);
	}

	printf("command entered is %s\n", input);

	token = strtok(input, "\n");

	array = malloc((sizeof(char) * strlen(token) = 1);

	printf("size of array = %lu\n", sizeof(array));
	printf("size of token = %lu\n", sizeof(token));

	printf("The token %s\n", token);
}

/**
 * non_interactive - shell works in a non_interactive mode
 */
void non_interactive(void)
{
	printf("This a Non_interactive mode\n");
}

