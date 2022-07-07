#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers.
 * @argc: Number of arguments supplied
 * @argv: Pointer to array of arguments supplied
 *
 * Return: 0 Success | 1 Error
 */
int main(int argc, char **argv)
{
	int i, j, s;

	s = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j) != '\0')
		{
			if (!isdigit(*(*(argv + i) + j)))
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
			j++;
		}
		s = s + atoi(argv[i]);
		i++;
	}
	printf("%d\n", s);
	return (EXIT_SUCCESS);
}
