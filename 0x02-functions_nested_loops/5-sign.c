#include "holberton.h"

/**
* print_sign - Prints the sign of a number
* @n: An int that will be checked for sign
*
*Return: An int
*/
int print_sign(int n)
{
	int my_answer;

	if (n > 0)
	{
		_putchar('+');
		my_answer = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		my_answer = 0;
	}
	else
	{
		_putchar('-');
		my_answer = -1;
	}

	return (my_answer);
}
