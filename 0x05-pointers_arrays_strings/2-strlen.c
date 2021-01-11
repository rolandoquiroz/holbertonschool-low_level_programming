#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: char *s String to be processed
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		++len;
	return (len);
}
