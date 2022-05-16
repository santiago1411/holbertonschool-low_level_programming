#include <stdio.h>
#include <stdlib.h>

/**
 * mod - module
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: 0.
 */
int mod(int a, int b)
{
if (b == 0)
{
        printf("Error\n");
        exit(100);
}
return (a % b);
}
