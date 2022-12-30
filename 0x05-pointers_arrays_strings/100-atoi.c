#include "main.h"

/**
 * _atoi - converts the first number in a string to an integer.
 * @s: pointer to the string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int i;
	int found = 0;
	int sign = 1;
	unsigned int total = 0;

	/* loop through s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* check if number is negative */
		if (s[i - 1] == '-')
			sign *= -1;

		/* if element is a digit, then loop */
		while ((s[i] >= '0') && (s[i] <= '9'))
		{
			/* place next digit and convert it to an integer */
			total = (total * 10) + (s[i] - '0');

			found = 1;
			i++;
		}
		/* check if a number was alrady found */
		if (found == 1)
			break;
	}

	total *= sign;

	return (total);
}
