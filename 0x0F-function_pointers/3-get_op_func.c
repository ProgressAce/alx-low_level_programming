#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user.
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the function chosen to perform the operation
 */

int (*get_op_func(char *s)) (int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
		    
	i = 0;
	while (i < 6)
	{
		/* check for matching operator character */
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);

		i++;
	}

	/* didn't match any of the expected operators */
	return (NULL);
}
