#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * from 00:00 to 59:00
 * Return: nothing
 */

void jack_bauer(void)
{
	int hours;
	int mins;

	for (hours = 0; hours < 60; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			/* if hours is a double digit number */
			if (hours > 9)
				/* get the first digit for hours*/
				_putchar((hours / 10) + '0');
			else
				_putchar('0');

			/* get the last digit for hours */
			_putchar((hours % 10) + '0');


			_putchar(':');


			/* get first and last digit for minutes */
			if (mins > 9)
				_putchar((mins / 10) + '0');
			else
				_putchar('0');

			_putchar((mins % 10) + '0');

			_putchar('\n');
		}
	}
}
