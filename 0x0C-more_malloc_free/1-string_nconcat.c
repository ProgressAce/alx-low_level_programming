#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings. Pointer to newly allocated
 * space in memory, contains s1, followed by the first n bytes of s2 and
 * null terminator.
 * @s1: string 1
 * @s2: string 2
 * @n: the amount of bytes for s2
 *
 * Return: pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int s1_len = 0;
	char *result;

	/* handle NULL entry of strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	result = malloc((s1_len + n) * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);

	/* initialise result with s1, followed by n bytes of s2 */
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		if (s2[i] == '\0')
			break;

		result[s1_len] = s2[i];
		s1_len++;
	}
	result[s1_len] = '\0';

	return (result);
}
