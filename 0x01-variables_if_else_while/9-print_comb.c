#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int ol;

for (ol = '0'; ol <= '9';)
{
putchar(ol);
if (ol != '9')
{
putchar(',');
putchar(' ');
}
ol++;
}
putchar('\n');

return (0);
}
