#include <stdio.h>
/**
 * main - entry point
 * 
 * Description: C Program that prints the size of various data types according to the computer it runs on
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	printf("Size of a char: %d byte(s)",sizeof(char));
	printf("Size of a int: %d byte(s)",sizeof(int));
	printf("Size of a long int: %d byte(s)",sizeof(long int));
	printf("Size of a long long int: %d byte(s)",sizeof(long long int));
	printf("Size of a float: %d byte(s)",sizeof(float));
	return (0);
}
