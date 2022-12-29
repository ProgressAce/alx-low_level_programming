#include "main.h"

/**
 * _strncat - concatenates two strings, using only "n" bytes
 * from the second string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: the number of bytes
 * Return: resultant string(pointed to by dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;
	int len_src = 0;

	/* get length of src */
	for (i = 0; src[i] != '\0'; i++)
		len_src++;
	/* get ending index of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* add the second string from src[0] to src[n] */
	m = 0;
	for (i = i; m < n; i++)
	{
		if (m >= len_src)
			break;

		dest[i] = src[m];
		m++;
	}

	dest[i] = '\0';

	return (dest);
}
