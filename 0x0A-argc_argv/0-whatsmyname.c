#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line.
 * @argc: the number of command line arguments
 * @argv: the command line argument strings
 *
 * Return: 0(Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
