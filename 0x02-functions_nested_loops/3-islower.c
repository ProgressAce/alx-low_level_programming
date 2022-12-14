#include <ctype.h>
#include "main.h"

/* function prototype for islower */
/* int islower(int c); */

/**
 * _islower -  Checks for lowercase character.
 * @c: the character to be checked
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
