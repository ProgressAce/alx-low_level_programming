#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers in its parameters,
 * each separated by a string
 * @separator: the string separator
 * @n: the number of parameters of the function
 * @...: the number arguments to be passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/* declare pointer to agrument list */
	va_list ptr;

	/* initialise argument list */
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		/**
		 * if it is the last argument of list,
		 * don't add separator
		 */
		if (separator == NULL || n - 1 == i)
			printf("%d", va_arg(ptr, int));
		else
			printf("%d%s", va_arg(ptr, int), separator);
	}

	printf("\n");
}
