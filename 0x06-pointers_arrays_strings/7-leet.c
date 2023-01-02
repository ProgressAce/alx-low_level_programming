#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * @c: character to check
 *
 * Return: c character
 */

int _isalpha(char c)
{
	if ((c >= 65) && (c <= 90))
		return (1);

	if ((c >= 97) && (c <= 122))
		return (1);

	return (0);
}

/**
 * char_tolower - changes a character to a lowercase character
 * @c: c character to change
 *
 * Return: c character
 */

char char_tolower(char c)
{
	if ((c >= 65) && (c <= 90))
	c += 32;

	return (c);
}

/**
 * leet - encode a string into leet characters [0, 1, 3, 4, 7]
 * @s: pointer to string
 *
 * Return: s pointer
 */

char *leet(char *s)
{
	int i;
	int j;
	char leet[] = "a4e3o0t7l1";

	/* loop through s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* loop through leet */
		for (j = 0; leet[j] != '\0'; j++)
		{
			/*
			 * check that s element is alpha
			 * and == leet element
			 */
			if (_isalpha(s[i]) && char_tolower(s[i]) == leet[j])
				s[i] = leet[j + 1];
		}
	}

	return (s);
}
