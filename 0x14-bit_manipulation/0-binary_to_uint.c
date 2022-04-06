#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number
 *		, or 0 if:
 *			- there is one or more chars in the string b that is not 0 or 1
 *			- b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	for (; b && *b; b++)
	{
		if (*b < '0' || *b > '1')
			return (0);

		ans = (ans << 1) + (*b - '0');
	}
	return (ans);
}
