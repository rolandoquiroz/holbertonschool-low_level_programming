#include "holberton.h"
/**
 *_sqrt_when_n_is_greater_than_one - Calculate the natural sqrt for n, if n > 1
 *
 *@m: int m candidate to be the natural square root of a n
 *
 *@n: int n number to calculate its natural square root
 *
 *Return: int natural square root of n
 */
int _sqrt_when_n_is_greater_than_one(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m * m < n)
		return (_sqrt_when_n_is_greater_than_one(m + 1, n));
	return (-1);
}
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: int n number to calculate its natural square root
 *
 * Return: int the natural square root of a n.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_when_n_is_greater_than_one(2, n));
}
