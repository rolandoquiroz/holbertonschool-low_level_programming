#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 *
 * @min: int min number.
 *
 * @max: int min number.
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int ints, pos;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	ints = min;
	pos = 0;
	while (ints <= max)
	{
		ptr[pos] = ints;
		ints++;
		pos++;
	}
	return (ptr);
}
