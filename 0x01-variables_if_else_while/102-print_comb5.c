#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = '0'; num1 <= '98'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '99'; num2++)
		{
			if (num1 <= '9')
				putchar('0');

			putchar(num1);
			putchar(' ');

			if (num2 <= '9')
				putchar('0');

			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
