#include "holberton.h"
/**
 * _puts - Srints a string, followed by a new line, to stdout
 * @str: char *str string to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		++len;
	}
	_putchar(10);
}
