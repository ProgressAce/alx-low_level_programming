#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base number
 * @y: the power number
 *
 * Return: -1, if y is < 0. else return the resulting power calculation.
 */

int _pow_recursion(int x, int y)
{
	/* base cases */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);

	return x * _pow_recursion(x, y - 1);
}
