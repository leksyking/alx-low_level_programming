#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional array
 * previously created by the alloc_grid function
 *
 * @grid: alloc_grid function
 * @height: array height
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
