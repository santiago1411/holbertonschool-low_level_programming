#include "main.h"
/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
