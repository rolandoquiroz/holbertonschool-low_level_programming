#include "holberton.h"
/**
 * _strncat - Function that concatenates two strings.
 * @dest: char *dest
 * @src: char *src
 * @n: int n
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = _strlen(dest);
	j = 0;
	while ((src[j] != '\0') && (j < n))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}

	return (dest);
}
