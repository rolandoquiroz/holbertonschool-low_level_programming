#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: Numbers to be printed.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arguments;

	va_start(arguments, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(arguments, int));
		if (x == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
