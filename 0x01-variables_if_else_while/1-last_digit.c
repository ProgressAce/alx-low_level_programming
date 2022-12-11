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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* check whether last digit is greater than, less or equal to zero */
	int lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);

	return (0);
}
