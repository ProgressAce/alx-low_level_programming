#include <stdio.h>
#include "main.h"

/**
 * sum_of_multiples_3_5 - prints the sum of all the multiples of 3 or 5 below
 * 1024 (excluded), followed by a new line.
 *
 * Returns: nothing
 */

void sum_of_multiples_3_5(void)
{
	int num;
	int sum = 0;

	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	printf("%d\n", sum);
}
