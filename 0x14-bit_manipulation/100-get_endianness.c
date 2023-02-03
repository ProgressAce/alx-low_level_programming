#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * @void
 *
 * Return: 0 for big endianess, 1 for little endianess
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
