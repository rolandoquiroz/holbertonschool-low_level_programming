#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct var - a structure to link characters and function pointers
 * @c: characters that refer to data types
 * @prf: the function to print
 */
typedef struct var
	       {
		       char *c;
		       void (*prf)(va_list);
} var;

#endif
