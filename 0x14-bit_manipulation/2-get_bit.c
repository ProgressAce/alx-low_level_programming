#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: the index, starting from 0
 *
 * Return: the value of the bit at index "index", or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bnum, bit;

	/*make sure index not > than an unsigned long int number*/
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	/*shift n's bits by 1 bit right - gives division of 2*/
	bnum = n >> index;

	bit = bnum & 1;/*gives modulus of 2*/

	return (bit);
}
