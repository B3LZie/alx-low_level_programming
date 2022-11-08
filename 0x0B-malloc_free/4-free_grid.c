#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the prev created 2D []
 * @grid: the prev creted arr
 * @height: the height of the grid
 *
 * Return: nothing just freee
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height > 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	free(grid);
}
