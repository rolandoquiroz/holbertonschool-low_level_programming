#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: int to be checked
 * Return: An int
 */
int _abs(int n)
{
if (n < 0)
{
n = -n;
}
else
{
n = n;
}
return (n);
}
