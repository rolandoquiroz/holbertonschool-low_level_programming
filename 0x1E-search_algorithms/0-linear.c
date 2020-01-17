#include "search_algos.h"

/**
 * linear_search - Function that creates a binary tree node
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located or
 * if value is not present in array or if array is NULL,
 * your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (value == array[i])
			{
				return (i);
			}
		}
	}
	return (-1);
}
