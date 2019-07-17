#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: String s1 given as a first parameter.
 *
 * @s2: String s2 given as a second parameter.
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, size3 = 0, i = 0;
	char *total;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	else
	{

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	size3 = size1 + size2 + 1;
	total = malloc(size3);

	while (*s1 != '\0')
	{
		total[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		total[i] = *s2;
		s2++;
		i++;
	}

	total[i] = '\0';

	if (total == NULL)
		return (NULL);
	else
		return (total);
	}
}
