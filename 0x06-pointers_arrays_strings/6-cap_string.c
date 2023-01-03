#include "main.h"

/**
 * cap_string - capitalises all the words in a string.
 * @s: pointer to the string
 *
 * Return: pointer s
 */

char *cap_string(char *s)
{
	int i;
	int j;
	int length = 0;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	/* get length of string */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	/* check for, if length <= 0 */
	if (length <= 0)
		return ("\n");

	/* loop through s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* loop through leet characters */
		for (j = 0; j < 13; j++)
		{
			/* check if s char == separators char */
			if (s[i] == separators[j])
			{
				if ((s[i + 1] >= 97) && (s[i + 1] <= 122))
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}

	return (s);
}
