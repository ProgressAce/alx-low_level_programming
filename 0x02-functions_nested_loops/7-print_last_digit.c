#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * if number is negative then make it positive.
 * @n: the number
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int rem = n % 10;

	/**
	 * if INT_MIN value is changed to positive it will be one
	 * more than the INT_MAX value
	 */
	if (rem < 0)
		rem *= -1;

	/* print the last digit of n */
	_putchar(rem);

	return (rem);
}
