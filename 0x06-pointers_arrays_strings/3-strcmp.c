#include "holberton.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: char *s1
 * @s2: char *s2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
		++s1, ++s2;

	return (*s1 - *s2);
}
