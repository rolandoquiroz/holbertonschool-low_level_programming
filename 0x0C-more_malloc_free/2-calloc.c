#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: char *dest
 *
 * @b: char *src
 *
 * @n: unsigned int n
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	hile ((n--) > 0)
		*ptr++ = b;
	return (s);
}

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
void *pnt;

pnt = malloc(nmemb * size);
if (!pnt)
{
return (NULL);
}
return (_memset(pnt, 0, nmemb * size));
}
