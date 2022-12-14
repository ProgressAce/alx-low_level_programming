#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 97; letter <= 122; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
