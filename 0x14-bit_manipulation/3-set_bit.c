#include "main.h"
/**
* set_bit - set bit at index
* @n: pointer unsigned long int
* @index: insigned int
* Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	mask <<= index;
	*n |= mask;

	return (1);
}
