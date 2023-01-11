#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers and prints the result
 * @argc: the number of command line arguments
 * @argv: the argument strings passed to it
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int i, d;
	int isNum = 1;
	int result = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		/* loop through argv and add if it is a digit */
		for (i = 1; i < argc; i++)
		{
			/* loop through argv, checking if chars are digits */
			for (d = 0; argv[i][d] != '\0'; d++)
			{
				if (!isdigit(argv[i][d]))
					isNum = 0;
			}

			/* add only if argv is a number, else print Error */
			if (isNum)
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}

	return (0);
}
