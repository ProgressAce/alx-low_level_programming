#include "main.h"

/**
 * flip_bits - count the amount of bits needed
 * to get from one number to the other.
 *
 * @n: the first unsigned long integer
 * @m: the other unsigned long integer
 *
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, count = 0;

	diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
			count++;

		/* move bits 1 to the right */
		diff >>= 1;
	}

	return (count);
}
