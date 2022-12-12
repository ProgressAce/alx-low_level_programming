#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Using the putchar function
 *
 * Return: Always 0
 */

int main(void)
{
	char character;

	for (character = 0; character < 10; character++)
	{
		putchar(character);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
