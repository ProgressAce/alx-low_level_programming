#include <stdio.h>
/**
 * main - C Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line. Using only the putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
