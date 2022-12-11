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
	for (letter = '97'; letter <= '122'; letter++)
	{
		putchar("%d", letter);
	}
	putchar("\n");

	return (0);
}
