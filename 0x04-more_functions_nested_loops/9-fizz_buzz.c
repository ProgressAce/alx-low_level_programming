#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	/* loop from 1 to 100 */
	for (num = 1; num <= 100; num++)
	{
		/* if num is 100 then print Buzz without space */
		if (num == 100)
		{
			printf("Buzz\n");
			break;
		}

		/* if num is a multiple of 3 and 5 */
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");

		/* if num is only a multiple of 3 */
		else if (num % 3 == 0)
			printf("Fizz ");

		/* if num is only a multiple of 5 */
		else if (num % 5 == 0)
			printf("Buzz ");

		/* print num as a number if it is not a multiple of 3 or 5 */
		else
			printf("%d ", num);

	}

	return (0);
}
