#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of command line arguments
 * @argv: the string arguments passed into it
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc);
	return (0);
}
