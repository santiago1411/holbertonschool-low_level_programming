#include "main.h"

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	for (o = longi; o > 0; --o)
	{
		putchar(--o);
	}
	putchar('\n');
}
