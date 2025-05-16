#include "main.h"

/**
 * _prime - Evaluates whether a number is or is not a prime
 * @m: Number to help check if n is a prime number
 * @n: Number to be evaluated as prime number
 * Return: 1 if n is a prime number | 0 if n is not a prime number
 */
int _prime(int m, int n)
{
    if (m * m > n)
        return (1);
    if (n % m == 0)
        return (0);
    return (_prime(m + 1, n));
}

/**
 * is_prime_number - Function that determines if the number is a prime
 * @n: Number to be evaluated as prime number
 * Return: 1 if n is a prime number | 0 if n is not a prime number
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (_prime(2, n));
}
