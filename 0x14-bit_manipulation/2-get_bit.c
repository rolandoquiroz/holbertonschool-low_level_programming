#include "holberton.h"

/**
 * get_bit - Gives the value of a bit at a given index.
 * @n: Number to evaluate.
 * @index: Index to look for.
 * Return: Bit at index on number.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n >>= 1;
	if (i > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return (n & 1);
}
