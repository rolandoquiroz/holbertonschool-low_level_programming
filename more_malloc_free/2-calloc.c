#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, using malloc.
 *
 * @nmemb: array to be allocated.
 *
 * @size: size of the array.
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
