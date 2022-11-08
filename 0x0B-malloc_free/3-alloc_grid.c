#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return 2D array of ints vals 0
 * @width: of array
 * @height: of array
 *
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
	int **i, j, k, l;

	l = 0;
	if (width > 0 || height > 0)
	{
		i = malloc(height * sizeof(int));
		if (i == NULL)
		{
			free(i);
			return (NULL);
		}
		for (k = 0; k < height; k++)
		{
			i[k] = malloc(width * sizeof(int));
			if (i == NULL)
			{
				while (l < k)
				{
					free(i[l]);
					l++;
				}
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				i[k][j] = 0;
			}
		}
		return (i);
	}
	else
		return (NULL);
}
