#include "holberton.h"
#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: Number of arguments supplied
 * @argv: Pointer to array of arguments supplied
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
