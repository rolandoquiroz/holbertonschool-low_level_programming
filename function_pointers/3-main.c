#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function.
 * @argc: count of input parameters
 * @argv: array of input parameters
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int number_1 = 0, number_2 = 0, ans = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[3]);

	ans = (*get_op_func(argv[2]))(number_1, number_2);
	printf("%d\n", ans);

	return (0);
}
