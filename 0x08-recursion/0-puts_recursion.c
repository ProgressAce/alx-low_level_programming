#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line
 * using recursion.
 * @s: pointer to the string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	/* base case: empty string */
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
