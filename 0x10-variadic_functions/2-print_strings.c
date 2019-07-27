#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: Numbers to be printed.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arguments;
	char *str;

	va_start(arguments, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(arguments, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
