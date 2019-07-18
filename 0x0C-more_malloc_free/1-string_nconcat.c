#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Calcualte the lenght of an array
 * @s: The array to be calculated
 *
 * Return: On success a pointer.
 * On error, NULL is returned.
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: char *s1 is the first string to concatenate.
 *
 * @s2: char *s2 is the second string to concatenate.
 *
 * @n: partial lenght of s2 to be concatenated.
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *pnt;

	k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= _strlen(s2))
	{
		n =  _strlen(s2);
	}
	pnt = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (pnt == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		pnt[k] = s1[i];
		k++;
	}
	for (j = 0; j < n; j++)
	{
		pnt[k] = s2[j];
		k++;
	}
	pnt[k] = '\0';
	return (pnt);
}
