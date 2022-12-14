#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the starting number
 *
 * Return: always 0
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}

		putchar('\n');
	}

	else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}

		putchar('\n');
	}
}
