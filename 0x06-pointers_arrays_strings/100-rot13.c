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
	int j;
	int found = 0;
	char alpha13[] = "abcdefghijklmABCDEFGHIJKLM";

	/* loop through s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* loop through alpha13 */
		for (j = 0; alpha13[j] != '\0'; j++)
		{
			/*
			 * check that s element is alpha
			 * and == first half of alpha (the alphabet)
			 */
			if (_isalpha(s[i]) && s[i] == alpha13[j])
			{
				s[i] += 13;
				found = 1;
			}
		}

		/*
		 * check that s element is alpha
		 * and not found in 1st half of the alphabet
		 */
		if (_isalpha(s[i]) && !(found))
			s[i] -= 13;

		/* revert found to false for next character */
		found = 0;
	}

	return (s);
}
