#include "holberton.h"
/**
* print_line - function that draws a straight line in the terminal.
*
* @n: n is the number of times the character _ should be printed
*
* Return: nothing
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
