#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: *str is the string to be processed
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0, length = _strlen(str);

	if (length % 2 != 0)
		i = (length + 1) / 2;
	else
		i = length / 2;

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
