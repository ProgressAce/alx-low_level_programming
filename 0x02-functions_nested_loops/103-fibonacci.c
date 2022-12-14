#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the sum of the even-valued terms, followed by a
 * new line. Only Consider the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000
 *
 * Return: always 0
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int temp;
	int sum_even = 0;

	while (num2 <= 4000000)
	{
		if (num1 % 2 == 0)
			sum_even += num1;

		if (num2 % 2 == 0)
			sum_even += num2;

		/* Update num1 and num2 with their new fibonacci values */
		temp = num2;
		num2 = num1 + num2;
		num1 = temp;
	}
	printf("%d", sum_even);

	putchar('\n');

	return (0);
}
