#include "holberton.h"
/**
 * _strstr - Function that locates a substring.
 * @haystack: char *haystack
 * @needle: char *needle
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	i = 0;
	while (haystack[i] != '\0')
	{
		k = i, j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
			i++, j++;
		if (needle[j] == '\0')
			return (haystack + k);
		i = k + 1;
	}

	return ('\0');
}
