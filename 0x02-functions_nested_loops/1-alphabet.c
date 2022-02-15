#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
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
