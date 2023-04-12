#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2D arrays
 * @grid: 2d grid
 * @height: height input
 *
 * Returns: On successs 0
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
