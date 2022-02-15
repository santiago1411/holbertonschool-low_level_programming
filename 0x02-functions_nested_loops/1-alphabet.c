#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char p;

	p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');

}
