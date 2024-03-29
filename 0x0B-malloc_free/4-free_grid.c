#include "main.h"

/**
 * free_grid - free up a 2d grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x <= height - 1; x++)
		free(grid[x]);
	free(grid);
}
