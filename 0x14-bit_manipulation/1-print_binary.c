#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Input number to be converted to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}


