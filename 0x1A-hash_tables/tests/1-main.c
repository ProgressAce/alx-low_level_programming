#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check 1-djb2.c functionality
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = NULL;
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
