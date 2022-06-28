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

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++, j++;
	}
	return (dest);
}
