#include "sort.h"
/**
 * selection_sort - Sorts an array of ints using the Selection sort
 *
 * @array: Array with the ints
 * @size: Size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		min = i;

		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}

		if (min > i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
