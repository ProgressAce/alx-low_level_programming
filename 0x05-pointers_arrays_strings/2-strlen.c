#include "main.h"

/**
 * _strlen - returns the length of a string passed to it.
 * @s: the string which will have its length returned.
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int length;

	length = 0;

	/* loop until end of string s */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
