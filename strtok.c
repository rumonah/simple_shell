#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * strtok - extract tokens from strings
 *
 * Return: 0
 */
int main(void)
{
	char section[] = "The Festive Season";
	char *strt = strtok(section, " ");

	while (strt != NULL)
	{
		printf("strt = %s\n", strt);
		strt = strtok(NULL, " ");
	}

	return (0);
}
