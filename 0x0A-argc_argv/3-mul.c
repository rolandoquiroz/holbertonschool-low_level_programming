#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: Number of arguments supplied
 * @argv: Pointer to array of arguments supplied
 *
 * Return: 0 Success | 1 Error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(*(argv + 1)) * atoi(*(argv + 2))));
		return (EXIT_SUCCESS);
	}
	printf("Error\n");
	return (EXIT_FAILURE);
}
