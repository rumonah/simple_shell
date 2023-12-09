#include "shell.h"
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
/**
 * main - shell source file
 *
 * Return: 0
 */
int main(void)
{
	char command[255];

	while (1)
	{
		prompt();
		user_input(command, sizeof(command));
		execute_command;
	}

	return (0);
}
