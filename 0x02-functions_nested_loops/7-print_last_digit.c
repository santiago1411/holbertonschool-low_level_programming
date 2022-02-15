#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int p)
{
	if (p < 0)
		p *= -1;

	_putchar('0' + (p % 10));

	return (p % 10);
}
