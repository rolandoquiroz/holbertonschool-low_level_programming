#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: String to be measured
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
