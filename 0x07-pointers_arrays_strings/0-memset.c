#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++; n--)
	{
		s[i] = b;
	}
	return (s);
}
