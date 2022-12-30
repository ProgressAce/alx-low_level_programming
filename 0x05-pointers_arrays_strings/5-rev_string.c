#include "main.h"

/**
 * rev_string - reverse a string passed to it.
 * @s: the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	int temp;	

	/* get length of string */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	/* 
	 * swap the first and last element pairs after each other
	 * until the loop reaches the centre
	 */
	length -= 1;
	i = 0;

	if (length > 0)
	{
		while (i <= (length / 2))
		{
			temp = s[i];
			s[i] = s[length - i];
			s[length - i] = temp;
			i++;
		}
	}
}
