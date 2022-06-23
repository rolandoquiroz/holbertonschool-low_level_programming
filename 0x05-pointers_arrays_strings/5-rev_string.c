#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = _strlen(s);
	char r[j];

	r[j] = '\0';
	j--;
	while (j >= 0)
	{
		r[i] = s[j];
		i++, j--;
	}
	s = r;
}
