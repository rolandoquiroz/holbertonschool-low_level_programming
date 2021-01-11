#include "holberton.h"

/**
 * rev_string -  reverse a string
 * @s: char
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0, j = 0, len = 0;
	char r[1000];

	while (s[len] != 0)
		len++;

	len--;
	i = len;
	while (i >= 0)
	{
		r[j] = s[i];
		j++;
		i--;
	}

	i = 0;
	while (i <= len)
	{
		s[i] = r[i];
		i++;
	}
}
