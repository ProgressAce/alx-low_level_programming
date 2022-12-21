#include "main.h"

/**
 * puts2 - prints every other(2nd) character of a string,
 * starting with the first character, followed by a new line.
 * @str: the pointer pointing to string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int length = 0;

	/* get length of string */
	for (i = 0; str[i] != '\0'; i++)
		length++;

	/* print every other character of the string */
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
