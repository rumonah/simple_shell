#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: 0
 */
int main(void)
{
        int r = 5;
        int j = 7;
        int sum = r + j;
        pid_t pid;

        printf("sum is %d\n", sum);

        pid = getpid();
        printf("my pid is %s\n", pid);

        return (0);
}
