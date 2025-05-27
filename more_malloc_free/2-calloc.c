#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, using malloc.
 *			The _calloc function allocates memory for an array of nmemb elements
 *			of size bytes each and returns a pointer to the allocated memory.
 *			The memory is set to zero
 * @nmemb: array to be allocated.
 * @size: size of the array.
 *
 * Return:  If nmemb or size is 0, then _calloc returns NULL,
 *			If malloc fails, then _calloc returns NULL
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
