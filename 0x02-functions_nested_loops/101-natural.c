#include <stdio.h>

/**
 * main - entry point
 *
 * Description - 1024 (excluded), followed by a new line.
 *
 * Returns: always 0
 */

int main(void)
{
	int num;
	int sum = 0;

	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
