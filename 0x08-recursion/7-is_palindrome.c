#include "holberton.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 *
 * @s: char *s String to be measured
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
/**
 * _palindrome - Evaluates if a string is a palindrome and or not.
 *
 * @s: char *s is the string to be checked
 *
 * @left_index: Evalutes string from left
 *
 * @right_index: Evaluates string from right
 *
 * Return: 1 - Palindrome string  | 0 - Not Palindrome string
 */
int _palindrome(char *s, int len)
{
if (len <= 1)
{
return (1);
}
else if (*s != *(s + (len - 1)))
{
return (0);
}
else
{
return (_palindrome(s + 1, (len - 1) - 1));
}
}
/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
y *
 * @s: char *s is the string to be checked
 *
 * Return: 1 - Palindrome string  | 0 - Not Palindrome string
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len <= 1)
{
return (1);
}
else
{
return (_palindrome(s, len));
}
}
