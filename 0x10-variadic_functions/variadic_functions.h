#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct char_data_type - Structure to link characters and functions to print
 * @c: Character that represents data type
 * @prnt_type: Pointer to the function that prints data type
 */
typedef struct char_data_type
{
	char *c;
	void (*prnt_type)(va_list);
} char_data_type_t;

#endif
