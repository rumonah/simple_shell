#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - delimited string input
 * @n: size of the buffer
 * @buffer:  buffer stores the variable that is
 * supposed to be taken in (input) or output.
 * Return: 0
 */
int main()
{
	size_t n;
	char *buff = malloc(sizeof(char));

	printf("Enter name ");
	getline(&buff, &n, stdin);

	printf("Name is %sBuffer size is %ld\n", buff, n);

	free(buff);

	return (0);
}
