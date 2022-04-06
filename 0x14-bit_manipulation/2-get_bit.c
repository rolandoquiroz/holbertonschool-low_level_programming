#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number whose bit you want to search
 * @index: position of the bit, starting from 0
 *
 * Return: Bit at index on number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
