#include "function_pointers.h"

/**
 * print_name - prints a name using another function as an argument
 * @name: the string
 * @f: the pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f) (char *))
{
	if (name)
		f(name);
}

