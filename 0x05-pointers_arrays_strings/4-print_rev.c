#include "holberton.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: char *s String to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
