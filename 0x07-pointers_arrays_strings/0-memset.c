#include "main.h"

/**
 * _memset - fills the first n bytes in the memory space
 * of a string with a constant byte.
 * @s: pointer to the string
 * @b: the constant char byte
 * @n: int for the first n bytes
 *
 * Compensative checks: if (sizeof(s) = 1); if (n <= 0)
 *
 * Return: pointer to resulting string (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* loop through first n bytes of s */
	for (i = 0; i < n; i++)
	{
		/* break if n > length of s */
		if (s[i] == '\0')
			break;

		/* fill s with char b */
		s[i] = b;
	}
	return (s);
}
