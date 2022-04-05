#include "holberton.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Input number to be converted to binary
 *
 * Return:  Void
 */
void print_binary(unsigned long int n)

{
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	bit = (n & 1) ? '1' : '0';
	_putchar(bit);
}


