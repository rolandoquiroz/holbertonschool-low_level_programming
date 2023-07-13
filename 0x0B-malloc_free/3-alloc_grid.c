#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2d array of integers.
 * @width: int width of the grid.
 * @height: int height of the grid.
 *
 * Return: NULL or 0
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid = NULL;

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		*(grid + h) = (int *)malloc(width * sizeof(int));

		if (*(grid + h) == NULL)
		{
			for (; h >= 0; h--)
				free(*(grid + h));
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			*(*(grid + h) + w) = 0;
	}

	return ((int **)grid);
}
