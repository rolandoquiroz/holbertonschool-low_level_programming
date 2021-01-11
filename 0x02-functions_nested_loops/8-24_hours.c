#include "holberton.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h, i, j, k;

	for (h = 48 ; h <= 50; h++)
	{
		for (i = 48 ; i <= 57; i++)
		{
			for (j = 48 ; j <= 53; j++)
			{
				for (k = 48 ; k <= 57 ; k++)
				{
					_putchar(h);
					_putchar(i);
					_putchar(58);
					_putchar(j);
					_putchar(k);
					_putchar(10);
				}
				if ((j == 53) && (k == 57))
				{
					break;
				}
			}
			if ((h == 50) && (i == 51))
			{
				break;
			}
		}
	}
}
