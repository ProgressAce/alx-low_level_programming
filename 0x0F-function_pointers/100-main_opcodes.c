#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints this program's main function operation codes
 * @argc: number of command line arguments
 * @argv: string command line arguments
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	address = (char *) main;

	for (i = 0; i < bytes; i++)
		printf("%02hhx ", address[i]);

	putchar('\n');

	return (0);
}
