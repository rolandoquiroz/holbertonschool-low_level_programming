#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to be measured
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;

	return (length);
}
