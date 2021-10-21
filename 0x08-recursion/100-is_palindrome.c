#include "holberton.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: String to be measured
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome - Evaluates if a string is a palindrome and or not.
 * @s: String to be evaluated as palindrome
 * @l: Length of s
 *
 * Return: 1 if s is a palindrome string  | 0 if s is not a Palindrome string
 */
int _palindrome(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != *(s + (l - 1)))
		return (0);
	return (_palindrome(s + 1, (l - 1) - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: String to be checked
 *
 * Return: _palindrome(s, _strlen_recursion(s))
 */
int is_palindrome(char *s)
{
	return (_palindrome(s, _strlen_recursion(s)));
}
