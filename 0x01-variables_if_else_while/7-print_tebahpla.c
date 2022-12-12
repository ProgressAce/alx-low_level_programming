#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);

		letter--;
	}

	putchar('\n');

	return (0);
}
