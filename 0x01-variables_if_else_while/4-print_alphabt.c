#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except q and e,
 * followed by a new line. Using putchar function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;

		putchar(letter);
	}

	putchar('\n');

	return (0);
}
