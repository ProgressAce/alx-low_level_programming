#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter.
 * @atr: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *sdup;
	int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	sdup = malloc(length * sizeof(char));
	if (sdup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		sdup[i] = str[i];

	return (sdup);
}
