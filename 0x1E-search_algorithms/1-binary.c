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
	if (!array)
	{
		return (-1);
	}
	return (binary_search_aux(array, 0, size - 1, value));
}
/**
 * binary_search_aux - Function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @inferior: Is the number of elements in array
 * @superior: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located or
 * if value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search_aux(int *array, size_t inferior, size_t superior, int value)
{
	size_t i = 0, medium = 0;

	printf("Searching in array: %d", array[inferior]);

	i = inferior + 1;
	while (i <= superior)
	{
		printf(", %d", array[i]);
		i++;
	}
	printf("\n");

	if ((array[inferior] != value) && (superior == inferior))
	{
		return (-1);
	}
	else if (array[inferior] == value)
	{
		return (inferior);
	}
	medium = ((inferior + superior) / 2);
	if (value > array[medium])
	{
		return (binary_search_aux(array, medium + 1, superior, value));
	}
	else if (value < array[medium])
	{
		return (binary_search_aux(array, inferior, medium - 1, value));
	}
	else
	{
	return (medium);
	}
}
