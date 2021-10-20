#include "holberton.h"
/**
 *_sqrt_n_greater_than_one - Function that calculates a natural sqr if n > 1
 *
 *@n: int n
 *
 *@l: int l
 *
 *Return: A natural square root
 */
int _sqrt_n_greater_than_one(int n, int l)
{
	if (l * l == n)
		return (l);
	else if (l * l < n)
		return (_sqrt_n_greater_than_one(n, l + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: int n number to calculate its natural square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_n_greater_than_one(n, 1));
}
