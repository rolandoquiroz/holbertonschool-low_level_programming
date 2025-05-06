#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 *           The _memcpy() function copies n bytes
 *           from memory area src to memory area dest.
 *           FYI: The standard library provides
 *           a similar function: memcpy. Run man memcpy to learn more.
 *
 * @dest: char *dest
 * @src: char *src
 * @n: unsigned int n
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *aux = dest;

	while ((n--) > 0)
		*aux++ = *src++;

	return (dest);
}
