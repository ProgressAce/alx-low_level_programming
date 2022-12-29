#include "main.h"

/**
 * _strncpy - copies the first "n" characters of a string and
 * overwrites it into another string.
 * @dest: pointer to the array destination for the copied string
 * @src: pointer to the string to be copied
 * @n: the number of characters
 *
 * Return: the pointer(dest) to the resultant/copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_dest = 0;
	int len_src = 0;

	/* get length of dest and src (address value's)*/
	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;

	for (i = 0; src[i] != '\0'; i++)
		len_src++;

	/*
	 * loop through dest and overwrite passing index with
	 * src until src nth element
	 */
	for (i = 0; i < n; i++)
	{
		if (i > len_src)
			dest[i] = '0';
		else
			dest[i] = src[i];
	}

	if (len_src < n)
		dest[i] = '\0';

	return (dest);
}
