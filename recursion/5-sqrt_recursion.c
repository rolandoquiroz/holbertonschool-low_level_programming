#include "main.h"

/**
 * _sqrt - Calculate the natural sqrt for n by process of elimination
 * @m: Candidate to be the natural square root of n
 * @n: Number to calculate its natural square root
 *
 * Return: Natural square root of n, or -1 if n does not have natural square root
 */
int _sqrt(int m, int n)
{
    if (m * m > n)
        return (-1);
    if (m * m == n)
        return (m);
    return (_sqrt(m + 1, n));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: Number to calculate its natural square root
 *
 * Return: The natural square root of n, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (0);
    return (_sqrt(1, n));
}
