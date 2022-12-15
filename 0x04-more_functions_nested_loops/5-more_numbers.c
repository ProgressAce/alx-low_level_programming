#include "main.h"

/**
 * more_numbers - prints the numbers 10 times, from 0 to 14,
 * followed by a new line.
 * @void
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	/* To print the numbers 10 times */
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');

			j++;
		}
		i++;

		_putchar('\n');
	}
}
