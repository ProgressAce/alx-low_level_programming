#include "main.h"

/**
 * puts_half - prints the second half of a string,
 * followed by a new line.
 * @str: the pointer pointing to the string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int n;
	int length = 0;

	/* get length of string */
	for (i = 0; str[i] != '\0'; i++)
		length++;

	/* get halfway point for string */
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	/* print second half of string */
	for (n = n; n < length; n++)
		_putchar(str[n]);

	_putchar('\n');
}
