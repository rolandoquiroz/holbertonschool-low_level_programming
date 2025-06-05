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
	if (array && size && action)
		while (size > 0)
		{
			(*action)(*array);
			array++, size--;
		}
}
