#include "sort.h"

/**
 * partition - Partition the array
 * @a: Array to be partitioned
 * @l: Starting point of array
 * @h: Ending point of array
 * @size: size of the array
 *
 * Return: pivot value
 */

int partition(int *a, ssize_t l, ssize_t h, size_t size)
{
	ssize_t i, j;
	int piv, tmp;

	piv = a[h];
	i = l - 1;
	for (j = l; j < h; j++)
	{
		if (a[j] <= piv)
		{
			i++;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			if (a[i] != a[j])
				print_array(a, size);
		}

	}
	tmp = a[i + 1];
	a[i + 1] = a[h];
	a[h] = tmp;
	if (a[i + 1] != a[h])
		print_array(a, size);
	return (i + 1);
}

/**
 * quicksort - Quick sort recursive function and create pivots
 * @arr: Array to be sorted
 * @low: bottom index of sorting array
 * @high: top index of sorting array
 * @size: Size of the array
 *
 * Return: void
 */
void quicksort(int *arr, ssize_t low, ssize_t high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, size);
		quicksort(arr, low, pivot - 1, size);
		quicksort(arr, pivot + 1, high, size);
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
