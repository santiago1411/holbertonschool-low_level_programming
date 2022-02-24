#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j];
		j++;
	}

	return (dest);
}
