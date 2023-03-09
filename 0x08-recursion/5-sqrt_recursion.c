#include "holberton.h"
/**
 *_sqrt - Calculate the natural sqrt for n by process of elimination
 *@m: Candidate to be the natural square root of a n
 *@n: Number to calculate its natural square root
 *
 *Return: Natural square root of n | -1  if n does not have natural square root
 */
int _sqrt(int m, int n)
{
	if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	else
		return (_sqrt(m + 1, n));
}
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: Number to calculate its natural square root
 *
 * Return: _sqr(0, n)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
