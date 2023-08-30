#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory allocated for a 2d array
 * @grid: 2d array to be freed
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: no explicit return value
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
