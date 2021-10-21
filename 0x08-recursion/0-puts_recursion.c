#include "holberton.h"
/**
 * _puts_recursion - Function that prints a string, followed by a new line
 * @s: String to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(10);
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
