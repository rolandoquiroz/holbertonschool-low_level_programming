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
	int i = _strlen(dest), j;

	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++, j++;
	}
	return (dest);
}
