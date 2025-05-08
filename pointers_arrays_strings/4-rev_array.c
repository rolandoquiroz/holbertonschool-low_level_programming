#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 *  @a: pointer to the array
 *  @n: size of the array
 *
 *  Returns: Nothing
 */
void reverse_array(int *a, int n)
{
	/* 1 - Copy starting address of the array */
	int *start = a;
	/* 2 - Calculate ending address of the array */
	int *end = a + n - 1;
	/* 3 - Create integer auxiliar variable */
	int aux;
	/* 4 - Swap start with end until it is possible */
	for (; start < end;)
	{
		aux = *start;
		*start = *end;
		*end = aux;
		start++, end--;
	}
}
