#include "variadic_functions.h"

/**
 * print_all - prints all types of arguments passed to it of types:
 * char, int, float, and char *.
 * @format: a string of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list vapt;
	unsigned int i = 0, j;
	char *str;
	char types[] = "cifs";

	va_start(vapt, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vapt, int));
				break;
			case 'i':
				printf("%d", va_arg(vapt, int));
				break;
			case 'f':
				printf("%f", va_arg(vapt, double));
				break;
			case 's':
				str = va_arg(vapt, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j] && format[i + 1] != '\0')
			{
				printf(", ");
				break;
			} j++;
		} i++;
	}
	printf("\n"); va_end(vapt);
}
