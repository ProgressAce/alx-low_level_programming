#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase,
 * followed by a new line.
 * @void
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
		_putchar(letter);

	_putchar('\n');
}
