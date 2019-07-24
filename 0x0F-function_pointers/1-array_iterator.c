#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a func given as a param on each element of an arr
 * @array:Array to be processed
 * @size:Size of the array
 * @action:Function to be executed on the array
 *
 * Return:nothing
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
