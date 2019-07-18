#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 *
 * @b: unsigned int b is the number of bytes to be allocated.
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *v_pnt;

	v_pnt = malloc(b);

	if (v_pnt == NULL)
	{
		exit(98);
	}

	return (v_pnt);

}
