#include "main.h"

/**
 * _strcpy - function that copies a string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: char pointer
 * @src: src char pointer to be copied
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	/* loop through src */
	for (i = 0; src[i] != '\0'; i++)
		length++;

	/* check if src has a length greater than 0 */
	if (length > 0)
	{
		/* loop through src */
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
