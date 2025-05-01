#include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: char *dest
 * @src: char *src
 * @n: int n
 *
 * Return: A pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *aux = dest;

	for (; *src && n ;)
	{
		*aux++ = *src++;
		n--;
	}

	/* Fill the rest with null bytes if any space left */
	for (; n;)
	{
		*aux++ = '\0';
		n--;
	}

	return (dest);
}
