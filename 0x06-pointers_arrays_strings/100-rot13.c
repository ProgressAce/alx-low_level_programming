#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * @c: the character to check
 *
 * Return: c character
 */

int _isalpha(char c)
{
	/* check if c is uppercase char */
	if ((c >= 65) && (c <= 90))
		return (1);

	/* check if c is lowercase char */
	if ((c >= 97) && (c <= 122))
		return (1);

	return (0);
}

/**
 * rot13 - encodes a string with the rot13 sequence
 * @s: string pointer
 *
 * Return: s pointer
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isalpha(s[i]))
		{
			/* 1st half of aphabet */
			if ((s[i] >= 65 && s[i] <= 77) ||
					(s[i] >= 97 && s[i] <= 109))
				s[i] = s[i] + 13;

			else /* 1st half of aphabet letters*/
				s[i] = s[i] - 13;
		}
	}

	return (s);
}
