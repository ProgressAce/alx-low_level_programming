#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	int temp;
	int count;

	/* for a negative number */
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/*
	 * loop until n reaches its last digit
	 * (count will then remain equal to 1)
	 */
	while (count != 1)
	{
		count = 1;

		temp = n;

		/* decrease temp until its first digit is retrieved */
		while (temp >= 10)
		{
			temp /= 10;

			/* count is used to remove the first digit of n */
			count *= 10;
		}

		_putchar(temp + 48);

		/* decrease n */
		n %= count;
	}
}
