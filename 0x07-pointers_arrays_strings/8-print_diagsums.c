#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diag of a square mtrx of ints.
 * @a: int *a
 * @size: int size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, acx, acy;

	acx = 0;
	i = 0;
	while (i < size * size)
	{
		acx = acx + a[i];
		i = i + size + 1;
	}
	acy = 0;
	i = size - 1;
	while (i < (size * size - 1))
	{
		acy = acy + a[i];
		i = i + size - 1;
	}
	printf("%d, %d\n", acx, acy);
}
