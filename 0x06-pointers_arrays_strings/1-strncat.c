#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings. The _strncat function is
 * similar to the _strcat function, except that:
 *  - it will use at most n bytes from src
 *  - src does not need to be null-terminated if it contains n or more bytes
 * @dest: char *dest
 * @src: char *src
 * @n: int n
 *
 * Return: pointer to the resulting string dest
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
