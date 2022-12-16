#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

void times_table(void)
{
	int col;
	int row;
	int result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			/**
			 * if result is a two digit number then print its first digit first,
			 * followed by its second digit
			 */
			if (result > 9)
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');

			/* Only put seperators when "col" == 9 */
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');

				/* put extra seperator if result > 9 */
				if (result <= 9)
					_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
