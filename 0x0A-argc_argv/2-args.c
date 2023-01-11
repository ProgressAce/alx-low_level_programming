#include <stdio.h>

/**
 * main - prints all the arguments passed to it, one line at a time.
 * @argc: the number of command line arguments
 * @argv: the argument strings passed to it
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
