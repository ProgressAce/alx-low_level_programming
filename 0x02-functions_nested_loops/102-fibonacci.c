#include <stdio.h>
#include "main.h"

/**
 * print_fibonacci_50 - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * @void
 *
 * Return: nothing
 */

void print_fibonacci_50(void)
{
	int num1 = 1;
	int num2 = 2;
	int temp;
	int counter = 0;

	/* print first fibonacci number*/
	printf("%d, ", num1);

	/* Loop until fibonacci prints 50 times */
	while (counter < 50)
	{
		printf("%d, ", num2);

		/* give num1 and num2 their new respective values */
		temp = num2;
		num2 = num1 + num2;
		num1 = temp;

		counter++;
	}

	putchar('\n');
}
