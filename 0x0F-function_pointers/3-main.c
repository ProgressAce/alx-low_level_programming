#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs a operation with two integers with operators(+, -, *, /, %)
 * @argc: the number of command line arguments
 * @argv: the string command line arguments
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3] == 0 && (strcmp(argv[2], "/") || strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = op_func(num1, num2);

	printf("%d\n", result);
	return (0);
}
