#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: int c
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int ret;

	if (c > 64 && c < 91)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
