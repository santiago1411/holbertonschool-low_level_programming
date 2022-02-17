#include "main.h"

/**
 * more_numbers -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
			{
				if (c > 9)
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
		_putchar('\n');
	}
}
