#include "holberton.h"
/**
 *times_table - Function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if ((i * j) < 10)
			{
				if (((i == 2) && (j == 4)) || ((i == 3) && (j == 3)) || ((i == 4) && (j == 2)) || ((i == 5) && (j == 1)) ||
					((i == 6) && (j == 1)) || ((i == 7) && (j == 1)) || ((i == 8) && (j == 1)) || ((i == 9) && (j == 1)))
				{
					_putchar('0' + (i * j));
					if (j == 9)
						_putchar('\n');
					_putchar(','), _putchar(' ');
				}
				else
				{
					_putchar('0' + (i * j));
					if (j == 9)
					{
						_putchar('\n');
						break;
					}
					_putchar(','), _putchar(' '), _putchar(' ');
				}
			}
			else
			{
				_putchar('0' + ((i * j) / 10)), _putchar('0' + ((i * j) % 10));
				if (j == 9)
				{
					_putchar('\n');
					break;
				}
				_putchar(','), _putchar(' ');
			}
		}
	}
}
