#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	
	while (*s1)
	{
		conct[i] = s1[i];
		i++;
		s1++;
	}

	while (*s2)
	{
		conct[i] = s2[ci];
		i++;
		ci++;
		s2++;
	}
	return (conct);
}
