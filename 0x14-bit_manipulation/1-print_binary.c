#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long integer to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
		/*recursion - shift n's bits 1 bit right to divide n by 2*/
		print_binary(n >> 1);

	/* & 1 - gives n modulus 2 result */
	_putchar((n & 1) + '0');
}
