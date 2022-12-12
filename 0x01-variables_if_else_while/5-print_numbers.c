#include <stdio.h>

/**
 * main - Program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);

		number++;
	}

	putchar('\n');

	return (0);
}
