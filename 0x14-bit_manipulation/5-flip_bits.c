#include "holberton.h"

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
	unsigned long int n_xor_m = n ^ m, flipped_bits = 0;

	for (; n_xor_m; n_xor_m >>= 1)
		flipped_bits += n_xor_m & 1;

	return ((unsigned int)flipped_bits);
}
