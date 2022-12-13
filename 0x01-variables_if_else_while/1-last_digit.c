#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - entry point
 *
 * Description: betty style doc for function main goes there
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* check whether last digit is greater than, less or equal to zero */
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d", n, lastDigit);
		printf(" and is greater than 5\n");
	}

	if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);

	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d", n, lastDigit);
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
