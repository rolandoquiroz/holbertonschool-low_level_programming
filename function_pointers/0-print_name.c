#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a name.
 * @name: Name to be printed.
 * @f:Function that prints
 *
 * Return:nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
