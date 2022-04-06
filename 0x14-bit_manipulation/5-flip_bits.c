#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip from one number
 * to the another
 * @n: unsigned long integer type
 * @m: unsigned long integer type
 *
 * Return: the number of bits neeed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, d = n ^ m;

	for (; d; d >>= 1)
		counter += d & 1;

	return (counter);
}
