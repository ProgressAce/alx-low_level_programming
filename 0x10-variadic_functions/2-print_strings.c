#include "variadic_functions.h"

/**
 * print_strings - prints all the strings passed to it
 * separated by a string separator
 * @separator: the string separator
 * @n: the number of parameters
 * @...: the string arguments to be passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	    int i;
	        /* declare pointer to agrument list */
	        va_list ptr;

		    /* initialise argument list */
		    va_start(ptr, n);

		        for (i = 0; i < n; i++)
				    {
					            /* if it is the last argument of list, don't add separator */
					            if (separator == NULL || n - 1 == i)
							                printf("%d", va_arg(ptr, int));
						            else
								                printf("%d%s", va_arg(ptr, int), separator);
							        }

			    printf("\n");
}

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare pointer to argument list */
	va_list vapt;
	int i;
	char *str;

	/* initialise argument list */
	va_start(vapt, n);

	for (i = 0; i < n; i++)
	{
		/* get access to current argument and point to next */
		str = va_arg(vapt, char *);

		/* printing argument */
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		/* last argument */
		if (n - 1 > i)
		{
			/* printing separator */
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(vapt);
}
