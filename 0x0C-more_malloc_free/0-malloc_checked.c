#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	void *dew;

	dew = malloc(b);
	if (dew == NULL)
		exit(98);
	return (dew);
}
