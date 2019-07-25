#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function.
 * @argc: count of input parameters
 * @argv: array of input parameters
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	return (98);
}
