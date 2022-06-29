#include "holberton.h"
/**
 * _strcat - Function that concatenates two strings
 * @dest: char *dest
 * @src: char *src
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest), j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
