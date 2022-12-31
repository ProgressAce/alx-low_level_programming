#include "main.h"

/**
 * _strcmp - compares the characters of two strings,
 * exactly like strcmp function.
 * @s1: first string
 * @s2: second string
 *
 * Return: the first difference between characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;
	int len_s1 = 0;
	int len_s2 = 0;

	/* get length of s1 and s2 */
	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;

	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;

	/* check if s1 or s2 are empty */
	if ((len_s1 <= 0) || (len_s2 <= 0))
		return ('\0');

	i = 0;
	/* loop until s1 or s2 reaches their null byte character */
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		/* check if s1 and s2 characters differ */
		if (s1[i] != s2[i])
		{
			result = (int)(s1[i] - s2[i]);
			break;
		}

		i++;
	}

	return (result);
}
