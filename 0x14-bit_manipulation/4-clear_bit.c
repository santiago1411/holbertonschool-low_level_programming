#include "main.h"

/**
* clear_bit - clear bit at index
* @n: pointer unsigned long int
* @index: insigned int
* Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	mask <<= index;
	mask = ~mask;
	*n &= mask;

return (1);
}
