#include "holberton.h"
/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: char *s
 *
 * @c: char c
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	return ('\0');
}
