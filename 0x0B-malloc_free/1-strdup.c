#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, r;
	char *aaa;

	if (str == NULL)
		return (NULL);

	for (r = 0; r <= *str; r++)
	{
		r += 1;
		aaa = malloc(sizeof(char) * r);
	}
	for (i = 0; i < r; i++)
		aaa[i] = str[i];

	if (aaa == NULL)
		return (NULL);
	return (aaa);
}
