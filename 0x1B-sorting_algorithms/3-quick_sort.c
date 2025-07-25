#include "sort.h"

/**
 * swap - Swap two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int temp;

	if (a != b && *a != *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: Array to be partitioned
 * @low: Starting index
 * @high: Ending index
 * @size: Total size (for print)
 *
 * Return: Final pivot index
 */
int lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high];
	ssize_t i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quicksort - Quick sort recursive function and create pivots
 * @array: Array to be sorted
 * @low: bottom index of sorting array
 * @high: top index of sorting array
 * @size: Size of the array
 *
 * Return: void
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of ints using the Quick sort Lomuto algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if ((array == NULL) || (size < 2))
		return;

	quicksort(array, 0, size - 1, size);
}
