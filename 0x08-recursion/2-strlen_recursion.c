#include "main.h"

int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strle_recursion(s + 1);
	}
	return(longi);
}
