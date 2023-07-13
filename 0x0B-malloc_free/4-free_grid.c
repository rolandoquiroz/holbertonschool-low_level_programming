#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2d grid created by alloc_grid
 * @grid: int **grid to be freed
 * @height: int height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int h = 0;

	for (; h < height; h++)
		free(*(grid + h));

	free(grid);
}
