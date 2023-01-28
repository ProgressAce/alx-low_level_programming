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
	unsigned int t1 = 1, t2 = 2, even_sum = 0;

	while (t1 + t2 <= 4000000)
	{
		if (t1 % 2 == 0)
			even_sum += t1;

		if (t2 % 2 == 0)
			even_sum += t2;

		/* update fibonacci term values */
		t1 = t2;
		t2 = t1 + t2;
	}

	printf("%u\n", even_sum);

	return (0);
}
