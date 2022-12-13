#include <unistd.h>
/**
 * main - entry point
 *
 * Description: C Program that prints certain text without using
 * any functions from man (3) printf and man (3) puts
 *
 * Return: 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar,", 48);
	write(1, " 2015-10-19\n", 13);
	return (1);
}
