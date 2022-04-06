#include "holberton.h"

/**
 * get_endianness - function that checks endianness
 * @void: void
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int value = 255;
	char *lsb = (char *)&value;

	return (*lsb ? 1 : 0);
}
