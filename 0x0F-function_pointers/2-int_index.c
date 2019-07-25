#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function
 * Return: Integer searched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
