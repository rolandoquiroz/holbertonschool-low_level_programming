#include "holberton.h"
#include <stdio.h>

/**
 * main - Program that prints all arguments it receives.
 * @argc: Number of arguments supplied
 * @argv: Pointer to array of arguments supplied
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
