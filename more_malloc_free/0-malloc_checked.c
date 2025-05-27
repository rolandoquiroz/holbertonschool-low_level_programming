#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: unsigned int b is the number of bytes to be allocated.
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pnt = NULL;

	pnt = malloc(b);
	if (pnt == NULL)
		exit(98);

	return (pnt);
}
