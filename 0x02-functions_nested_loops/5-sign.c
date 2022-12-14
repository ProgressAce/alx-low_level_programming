#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number's sign to be printed
 *
 * Return: "+" and 1 for positive numbers
 *	   "0" and 0 for the 0 number
 *	   "-" and -1 for negative numbers
 *	   -2 for error
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (-2);
}
