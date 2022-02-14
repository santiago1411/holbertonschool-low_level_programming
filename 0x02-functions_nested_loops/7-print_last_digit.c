#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int p)
{
	if (p < 0)
		p *= -1;

	_putchar('0' + (p % 10));

	return (p % 10);
}
