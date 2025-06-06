#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

struct op
{
	char *op;
	int (*f)(int a, int b);
};

typedef struct op op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

int (*get_op_func(char *))(int, int);

#endif
