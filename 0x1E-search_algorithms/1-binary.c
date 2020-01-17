#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located or
 * if value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		return (binary_search_aux(array, 0, size - 1, value));
	}
	return (-1);
}
