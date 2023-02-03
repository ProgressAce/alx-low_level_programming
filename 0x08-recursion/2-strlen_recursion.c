#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the pointer s
 */

int _strlen_recursion(char *s)
{
	/* empty string - base case */
	if (*s == '\0')
		return (0);

	/* return 1 and start string s at incremented position */
	return (1 + _strlen_recursion(s + 1));
}
