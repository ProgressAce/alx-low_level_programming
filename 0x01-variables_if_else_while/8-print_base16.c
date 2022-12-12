#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line. Using the putchar function.
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch < 10; ch++)
		putchar(ch);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
