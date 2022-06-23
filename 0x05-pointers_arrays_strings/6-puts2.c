#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string, followed by a new line.
 * @str: char
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
