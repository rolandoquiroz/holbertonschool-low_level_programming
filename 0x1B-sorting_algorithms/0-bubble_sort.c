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
	size_t i, j;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (array[j] < array[j - 1])
			{
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
			j--;
		}
		i++;
	}


}
