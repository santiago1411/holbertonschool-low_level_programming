#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char p;

for (p = '0'; p <= '9'; p++)
putchar(p);

for (p = 'a'; p <= 'f'; p++)
putchar(p);

putchar('\n');

return (0);
}
