#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: Number to calculate its factorial
 *
 * Return: Factorial of n | -1 to indicate error If n < 0
 */
int factorial(int n)
{
	if (n < -1)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
