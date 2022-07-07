#include "holberton.h"
#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 * @argc: Number of arguments supplied
 * @argv: Pointer to array of arguments supplied
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *(argv + 0));
	return (0);
}
