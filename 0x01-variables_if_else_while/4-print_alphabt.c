#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char p;

for (p = 'a'; p <= 'z'; p++)
{
if (p != 'q' && p != 'e')
putchar(p);
}
putchar('\n');

return (0);
}

