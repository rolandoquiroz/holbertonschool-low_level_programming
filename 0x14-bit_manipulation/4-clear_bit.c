#include "holberton.h"

/**
 * clear_bit - sets bit to 0 at given index
 * @n: pointer to long uint whose bit we want to set
 * @index: uint position of bit
 *
 * Return: 1 on success, or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
