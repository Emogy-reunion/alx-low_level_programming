#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional array
 * @grid: 2 dimensional array grid
 * @height: height dimension of the grid
 * Description: frees memory of the  grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
