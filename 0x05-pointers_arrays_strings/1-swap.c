#include "holberton.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: int *a value of integer to be swapped
 * @b: int *b value of integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
