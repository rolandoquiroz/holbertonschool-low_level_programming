#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated : malloc(old_size)
 *
 * @old_size: unsigned int old memory size.
 *
 * @new_size: unsigned int new memory size.
 *
 * Return: A pointer to an array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
