#include "holberton.h"
/**
 * _prime - Evaluates whether a number is or not is a prime
 *
 * @n: int n is the number to be evaluated
 *
 * @l: int l is the number to make tries
 *
 * Return: an integer
 */
int _prime(int n, int l)
{
if (n < 2)
{
return (0);
}
else if (n % l == 0 && n != l)
{
return (0);
}
else if (n == l)
{
return (1);
}
return (_prime(n, l + 1));
}

/**
 * _prime - Function that answer if the number is a prime
 *
 * @n: int n is the number to be evaluated
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int is_prime_number(int n)
{
  return (_prime(n, 2));
}
