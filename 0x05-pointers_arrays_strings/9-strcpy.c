#include "holberton.h"

/**
 * _strcpy - Function that copies a string.
 * @dest: *dest buffer pointed to by dest
 * @src: *src string pointed to by src
 *
 * Return: char. the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = 0;

	return (dest);
}
