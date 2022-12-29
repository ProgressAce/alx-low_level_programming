#include "main.h"

/**
 * string_toupper - changes all the lowercase characters of a string
 * to upper case.
 * @str: the string
 *
 * Return: the pointer pointing to the string
 */

char *string_toupper(char *str)
{
	int i;
	int length;

	/* get the length of the string */
	for (i = 0; str[i] != '\0'; i++)
		length++;

	/* check if length of str is zero */
	if (length <= 0)
		return ("");

	/* loop through string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* chechk if character is in lowercase */
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
	}

	return (str);
}
