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
	if (n < 0)
		n = -n;

	/* print the last digit of n */
	_putchar((n % 10) + '0');

	return (n % 10);
}
