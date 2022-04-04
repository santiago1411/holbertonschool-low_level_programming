#include "main.h"
/**
 * flip_bits - counts the number of bits needed to flip to go from n to m
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			i++;
		n = n >> 1;
	}

	return (i);
}
