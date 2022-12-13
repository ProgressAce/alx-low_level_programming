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

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = 0; num2 <= '8'; num2++)
		{
			for (num3 = 0; num3 <= '9'; num3++)
			{
				for (num4 = num2 + 1; num4 <= 9; num4++)
				{
					putchar(num1);
					putchar(num2);

					putchar(' ');

					putchar(num3);
					putchar(num4);

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
