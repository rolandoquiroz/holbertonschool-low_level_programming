#include "holberton.h"
/**
 * _pow_recursion - Function that calculates the value of x ^ y
 * @x: Base
 * @y: Exponent
 *
 * Return: x ^ y | -1 If y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < -1)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
