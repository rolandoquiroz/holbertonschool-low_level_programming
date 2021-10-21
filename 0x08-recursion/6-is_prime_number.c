#include "holberton.h"
/**
 * _prime - Evaluates whether a number is or not is a prime
 *
 * @m: int m is the number to help to check if n is prime
 *
 * @n: int n is the number to be evaluated
 *
 * Return: an integer
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
 *
 * @n: int n is the number to be evaluated
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(2, n));
}
