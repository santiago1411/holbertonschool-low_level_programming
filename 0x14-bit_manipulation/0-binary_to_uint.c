#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, a = 0;

	if (b == NULL);
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		if (b[a] > '1' || b[a] < '0')
		{
			return (0);
		}
		uint *= 2;
		if (b[a] == '1')
		{
			uint++;
		}
		a++
	}
	return (uint);
}
