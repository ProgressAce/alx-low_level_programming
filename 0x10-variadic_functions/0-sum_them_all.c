#include "variadic_functions.h"

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: the number of parameters for the function
 * @...: the integer arguments to be passed
 *
 * Return: the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	/* declare pointer to argument list */
	va_list ptr;

	if (n == 0)
		return (0);

	/* initialise argument list */
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		/**
		 * access current argument/variable
		 * and point to the next
		 */
		sum += va_arg(ptr, int);

	/* end traversal of argument list */
	va_end(ptr);

	return (sum);
}
