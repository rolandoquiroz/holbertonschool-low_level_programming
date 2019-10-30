#include "sort.h"
/**
 * bubble_sort - Makes the sum of two numbers
 * @array: First operand
 * @size: Second operand
 *
 * Return: The sum of the two parameters
 */
void bubble_sort(int *array, size_t size)
{
	int inter, tmp;
	size_t i, j;

	inter = 1;
	i = 0;
	while ((i < size - 1) && inter)
	{
		inter = 0;

		for (j = size - 1; j > i; j--)
		{
			if (array[j] < array[j - 1])
			{
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
				inter = 1;
			}
		}

		if (inter)
			i++;
	}

}
