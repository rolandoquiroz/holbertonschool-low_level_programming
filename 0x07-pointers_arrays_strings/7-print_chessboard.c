#include "holberton.h"
/**
 * print_chessboard - Function that prints the chessboard.
 * @a: Array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (a[i][j] != 0)
				_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
