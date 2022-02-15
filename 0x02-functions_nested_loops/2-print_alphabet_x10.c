#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
char p;
int  count = 0;

while (count < 10)
{
for (p = 'a'; p <= 'z'; p++)
{
_putchar(p);
}
_putchar('\n');
count++;
}
}
