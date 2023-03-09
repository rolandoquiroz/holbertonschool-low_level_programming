#include "holberton.h"
/**
 * _prime - Evaluates whether a number is or not is a prime
 * @m: Number to help to check if n is a prime number
 * @n: Number to be evaluated as prime number
 *
 * Return: 1 if n is a prime number | 0 if n is not a prime number
 */
int _prime(int m, int n)
{
	if (n % m == 0 && n != m)
		return (0);
	if (n == m)
		return (1);
	return (_prime(m + 1, n));
}

/**
 * is_prime_number - Function that answer if the number is a prime
 * @n: Number to be evaluated as prime number
 *
 * Return: _prime(2, n)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(2, n));
}
