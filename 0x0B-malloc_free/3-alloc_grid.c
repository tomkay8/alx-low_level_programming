#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory to create a 2D grid with given dimensions.
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to a newly allocated 2D array (grid) of ints,
 * or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
