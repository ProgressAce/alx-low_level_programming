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
	int length = 0;

	/* get the length of string "s" */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	/* size length so that it can act as array index starting from 0 and not 1 */
	length--;

	/* reverse the string starting at the end */
	while (length >= 0)
	{
		_putchar(s[length]);

		length--;
	}
	_putchar('\n');
}
