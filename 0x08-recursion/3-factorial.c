#include "holberton.h"
/**
 * factorial - Function that returns the factorial of a given number.
 *
 * @n: int n is the number to calculate its factorial
 *
 * Return: int
 */
int factorial(int n)
{
if (n < -1)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
