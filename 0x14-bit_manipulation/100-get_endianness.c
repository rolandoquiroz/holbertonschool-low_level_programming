#include "holberton.h"

/**
 * get_endianness - function that checks endianness
 * @void: void
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
