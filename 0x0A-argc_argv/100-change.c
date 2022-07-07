#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Number of arguments supplied
 * @argv: Pointer to array of arguments supplied
 *
 * Return: Int: 0 Success | 1 Error
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents--;
			coins++;
		}

	printf("%d\n", coins);
	return (EXIT_SUCCESS);
}
