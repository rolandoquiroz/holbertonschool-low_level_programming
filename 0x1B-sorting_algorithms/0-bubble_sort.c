#include "sort.h"
/**
 * bubble_sort - Sorts an array of ints using the Bubble sort algorithm
 * @array: Array of ints
 * @size: Size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}

}
