#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function
 * Return: Integer searched
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) == 1)
				return (i);

	return (-1);
}
