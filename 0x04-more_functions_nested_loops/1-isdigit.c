#include "holberton.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: int c
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
int ret;
if (c > 47 && c < 58)
{
ret = 1;
}
else
{
ret = 0;
}
return (ret);
}
