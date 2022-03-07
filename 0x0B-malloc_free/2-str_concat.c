#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	
	while (*s1)
	{
		conct[i] = *s1;
		i++;
	}

	while (*s2)
	{
		conct[i] = *s2;
		i++;
		s2++;
	}
	return (conct);
}
