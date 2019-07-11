#include "holberton.h"
/**
 * is_prime_number - Function that returns if the number is a prime
 *
 * @n: int n is the number to be evaluated
 *
 * Return: 1 If n is prime or 0 If n is not prime
 */
int is_prime_number(int n)
{
  return (_prime(n, 2));
}

/**
 * _prime - Evaluates whether a number is or not is a prime
 * @n: int n
 * @l: int l
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int get_prime(int n, int i)
{
if (n < 2)
return (0);
else if (n % i == 0 && i != n)
return (0);
else if (i == n)
return (1);
return (get_prime(n, i + 1));
}
