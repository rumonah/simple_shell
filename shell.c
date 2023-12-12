#include "shell.h"
#include <unistd.h>

void interactive();
void non_interactive();

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

void interactive()
{
	char *input, *token = NULL;
	size_t r = 0;

	printf("$ ");

	if (getline(&input, &r, stdin) == -1)
	{
		free(input);
		exit(EXIT_FAILURE);
	}

	printf("command entered is %s\n", input);

	token = strtok(input, "\n");

	printf("The token %s\n", token);
}
void non_interactive()
{
	printf("Non_intaractive mode\n");
}
