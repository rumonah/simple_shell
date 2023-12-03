#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("Before fork I was twenty\n");

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	printf("After fork I became twenty six\n");

	return (0);
}
