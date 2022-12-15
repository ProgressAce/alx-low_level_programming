#include "main.h"

/**
 * print_most_numbers - print the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line.
 * @void
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		if ((ch != '2') && (ch != '4'))
			_putchar(ch);

		ch++;
	}

	_putchar('\n');
}
