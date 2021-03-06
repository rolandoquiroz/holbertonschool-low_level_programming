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

	if ((!array) || (!size))
		return (-1);

	while (left < size && array[left] <= value)
	{
		right = min(size - 1, left + jump);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] <= value && array[right] >= value)
		{
			break;
		}

		left += jump;

	}

	if (left >= size || array[left] > value)
	{
		printf("Value found between indexes [%d] and [%d]\n",
		       (int)left - jump, (int)left);
		printf("Value checked array[%d] = [%d]\n", (int)left - jump,
		       array[(int)left - jump]);
		return (-1);
	}

	right = min(size - 1, right);
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i <= right && array[i] <= value; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
