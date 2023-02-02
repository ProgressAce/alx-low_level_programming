#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary string of 0s and 1s
 *
 * Return: the converted number, or 0 if  b is NULL
 * or a char/s in b are not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0, power = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	i--;
	while (i > -1)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		if (b[i] == '1')
			/*increase num by powers of 2*/
			num += 1 << power;

		power++;
		i--;
	}

	return (num);
}
