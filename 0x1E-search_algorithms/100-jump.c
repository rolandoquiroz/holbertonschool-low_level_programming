#include "search_algos.h"

/**
 * min - Searches for min value between a and b
 * @a: Number a
 * @b: Number b
 * Return: min value between a and b.
 */

int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * jump_search - Function that searches for a value in a sorted
 * array of integers using the jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located or
 * if value is not present in array or if array is NULL,
 * your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = (int) sqrt(size);
	size_t left = 0;
	size_t right = 0;
	size_t i = 0;

	while (left < size && array[left] <= value)
	{
		right = min(size - 1, left + jump);

		if (array[left] <= value && array[right] >= value)
		{
			break;
		}

		left += jump;
	}

	if (left >= size || array[left] > value)
	{
		return (-1);
	}

	right = min(size - 1, right);
	for (i = left; i <= right && array[i] <= value; ++i)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
