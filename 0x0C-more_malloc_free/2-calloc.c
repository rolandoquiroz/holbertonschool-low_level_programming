#include "holberton.h"
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

void *pnt;
unsigned int i;

pnt = malloc(malloc(sizeof(char) * nmemb * size);

if (pnt == NULL)
{
return (NULL);
}
i = 0;
while (i < nmemb * size)
{
ptr[i] = 0;
i++;
}
return (pnt);
}
