#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print the alphabet in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
