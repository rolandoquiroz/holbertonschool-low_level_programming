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
	unsigned int ui;

	/* if (b == NULL) */
	if (b == 0)
		return (0);

	ui = 0;
	for (; *b != '\0'; b++)
	{
		if (*b < '0' || *b > '1')
			return (0);

		/* ui = (ui << 1) + (*b - '0'); */
		/* ui = (ui * (2^1)) + (*b - '0'); */
		/* ui = (2 * ui) + (*b - '0'); */
		ui *= 2;
		if (*b == '1')
			ui += 1;
	}

	return (ui);
}
