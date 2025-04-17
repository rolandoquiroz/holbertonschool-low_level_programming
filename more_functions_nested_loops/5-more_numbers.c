#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers,
*				 from 0 to 14, followed by a new line.
*
* Return: nothing
*/
void more_numbers(void)
{
	int j;

	for (j = 0; j < 150; j++)
	{
		if (((j % 15) / 10) > 0)
			_putchar('0' + ((j % 15) / 10));
		_putchar('0' + ((j % 15) % 10));

		if ((j % 15) == 14)
			_putchar('\n');
	}
}
