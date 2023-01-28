#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0
 */

int main(void)
{
	unsigned int num1 = 1, num2 = 2, sum;
	int counter = 1;

	/* print first fibonacci number*/
	printf("%d, ", num1);

	/* Loop until fibonacci prints 50 times */
	while (counter != 50)
	{
		/* update fibonacci term values */
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		counter++;

		if (counter == 50)
			printf("%u\n", num1);
		else
			printf("%u, ", num1);
	}

	return (0);
}
