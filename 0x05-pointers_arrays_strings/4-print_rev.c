#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: the string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int length;

	/* get the length of string "s" */
	for (i = 0; s[i] != '\n'; i++)
		length++;

	_putchar(s[length - 1]);
	/* reverse the string starting at the end */
	/*while (length >= 0)
	{
		_putchar(s[length]);

		length--;
	}*/
	_putchar('\n');
}
