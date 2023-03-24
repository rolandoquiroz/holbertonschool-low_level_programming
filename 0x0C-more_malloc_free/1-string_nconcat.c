#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of an string
 * @s: string to be measured
 *
 * Return: length of the string
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		;

	return (i);
}

/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: char *s1 is the first string to concatenate.
 * @s2: char *s2 is the second string to concatenate.
 * @n: partial lenght of s2 to be concatenated.
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, i = 0;
	char *s1s2_n_ = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s2);

	if (n >= _strlen(s2))
		n = _strlen(s2);

	s1s2_n_ = (char *)malloc((size1 + n + 1) * sizeof(char));

	if (s1s2_n_ == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(s1s2_n_ + i) = *(s1 + i);

	for (i = 0; i < n; i++)
		*(s1s2_n_ + (size1 + i)) = *(s2 + i);

	*(s1s2_n_ + (size1 + n)) = '\0';

	return ((char *)s1s2_n_);
}
