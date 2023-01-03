#include "main.h"

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
	char leet_alpha[] = "aAeEoOtTlL";
	char leet_num[] = "4433007711";

	/* loop through s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* loop through leet */
		for (j = 0; leet_alpha[j] != '\0'; j++)
		{
			/* check that s element equals leet element */
			if (s[i] == leet_alpha[j])
				s[i] = leet_num[j];
		}
	}

	return (s);
}
