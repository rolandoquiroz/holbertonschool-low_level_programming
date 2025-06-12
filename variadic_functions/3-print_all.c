#include "variadic_functions.h"
#include "stdio.h"
/**
 * print_all - Function that prints anything
 * @format: A pointer to a list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int val1, i = 0;
	double val2;
	char *val3 = NULL;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				val1 = va_arg(args, int);
				printf("%c", val1);
				break;
			case 'i':
				val1 = va_arg(args, int);
				printf("%d", val1);
				break;
			case 'f':
				val2 = va_arg(args, double);
				printf("%f", val2);
				break;
			case 's':
				val3 = va_arg(args, char *);
				if (val3 == NULL)
					val3 = "(nil)";
				printf("%s", val3);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(args);
}
