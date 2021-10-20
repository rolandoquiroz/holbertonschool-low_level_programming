#include "holberton.h"
/**
 * _pow_recursion - Function that returns the value of x^y.
 *
 * @x: int x is the base
 *
 * @y: int y is the exponent
 *
 * Return: int
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
