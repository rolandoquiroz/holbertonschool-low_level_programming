#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: int *a Array of integers to be processed
 * @n: int n is the number of elements of the array to be printed
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
