#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n:Number of parameters to be summed
 *
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list arguments;

	if (n == 0)
		return (0);

	va_start(arguments, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}
