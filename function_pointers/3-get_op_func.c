#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects correct func to perform operation asked by the user
 * @s: operator passed as argument to the program
 * Return:pointer to the function to the operator parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
