#include "main.h"

/**
 * _strncpy - copies the first "n" characters of a string and
 * overwrites it into another string.
 * @dest: pointer to destination for the copied string
 * @src: pointer to the string to be copied
 * @n: the number of characters
 *
 * Return: the pointer(dest) to the resultant/copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src = 0;

	/* get length of strings at src (address value's) */
	for (i = 0; src[i] != '\0'; i++)
		len_src++;

	/* check if n is a positive number, else put null byte into dest */
	if (n > 0)
	{
		/*
		 * loop through dest and overwrite passing index with
		 * src until src nth element
		 */
		for (i = 0; i < n; i++)
		{
			if (i >= len_src)
				/* add "0" for characters after len_src */
				dest[i] = '0';
			else
				dest[i] = src[i];
		}

		/* append null character only if len_src(source string) <= n */
		if (n > len_src)
	      		dest[len_src] = '\0';
	}
	else
		dest[0] = '\0';

	return (dest);
}
