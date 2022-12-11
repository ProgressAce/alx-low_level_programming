#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Check whether n is positive, negative or zero */
	if (n > 0)
		puts("%d is positive", n)
	if (n == 0)
		puts("%d is zero", n)
	if (n < 0)
		puts("%d is negative", n)
	return (0);
}
