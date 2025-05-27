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
	int i;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
