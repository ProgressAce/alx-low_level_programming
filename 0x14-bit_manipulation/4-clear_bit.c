#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the unsigned long integer
 * @index: the index, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bnum;

	/*make sure index not > than an unsigned long int number*/
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bnum = ~(1 << index);

	*n = *n & bnum;

	return (1);
}
