#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **eee;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	eee = malloc(sizeof(int) * height);

	if (eee == NULL)
	{
		free(eee);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		eee[i] = malloc(sizeof(int) * width);
		if (eee == NULL)
		{
			free(eee);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			eee[i][n] = 0;
		}
	}
	return (eee);
}
