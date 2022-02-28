#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int p, sum1 = 0, sum2 = 0;

	for (p = 0; p < size; p++)
	{
		sum1 += a[p];
		a += size;
	}

	a -= size;

	for (p = 0; p < size; p++)
	{
		sum2 += a[p];
		a -= size;
	}

	_printf("%d, %d\n", sum1, sum2);
}
