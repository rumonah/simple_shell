#include "shell.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - shell source file
 *
 * Return: 0
 */
int main(void)
{
	char process[128];

	while (1)
	{
		display_prompt();
		user_input(process, sizeof(process));
		execute_process(process);
	}

	return (0);
}
