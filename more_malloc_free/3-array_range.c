#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 *              The array created should contain all the values
 *              from min (included) to max (included), ordered from min to max
 * @min: int min number
 * @max: int max number
 *
 * Return: the pointer to the newly created array
 *          If min > max, return NULL
 *          If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
