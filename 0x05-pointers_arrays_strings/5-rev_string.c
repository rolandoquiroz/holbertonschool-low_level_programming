#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: char
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *r = s;
	char left, right;

	while (*r)
		++r;
	--r;

	while (s < r)
	{
		left = *s, right = *r;
		*s = right, *r = left;
		++s, --r;
	}
}
