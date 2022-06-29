#include "holberton.h"
/**
 * _strcat - Function that concatenates two strings. This function appends the
 * src string to the dest string, overwriting the terminating null byte (\0) at
 * the end of dest, and then adds a terminating null byte
 * @dest: char *dest
 * @src: char *src
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = _strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';

	return (dest);
}
