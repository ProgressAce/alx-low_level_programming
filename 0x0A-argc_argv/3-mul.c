#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result.
 * @argc: the number of command line arguments
 * @argv: the argument strings passed to it
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = n1 * n2;

		printf("%d\n", result);
	}
	return (0);
}
