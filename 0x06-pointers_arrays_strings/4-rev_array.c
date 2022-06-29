#include "holberton.h"

/**
 * reverse_array -  reverse an array of integers
 * @a: int *a
 * @n: int n
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *b;
	int i, left, right;

	b = a;

	i = 0;
	while (i < (n - 1))
	{
		b++;
		i++;
	}

	if ((n % 2) == 0)
		i++;

	while (i > (n / 2))
	{
		left = *a, right = *b;
		*a = right, *b = left;
		a++, b--, i--;
	}
}
