#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int m[] = {666, 69, 13, 3};
	int p[] = {27, 12};
	int z[] = {777};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));

	print_array(m, sizeof(m) / sizeof(int));
	reverse_array(m, sizeof(m) / sizeof(int));
	print_array(m, sizeof(m) / sizeof(int));

	print_array(p, sizeof(p) / sizeof(int));
	reverse_array(p, sizeof(p) / sizeof(int));
	print_array(p, sizeof(p) / sizeof(int));

	print_array(z, sizeof(z) / sizeof(int));
	reverse_array(z, sizeof(z) / sizeof(int));
	print_array(z, sizeof(z) / sizeof(int));

	return (0);
}
