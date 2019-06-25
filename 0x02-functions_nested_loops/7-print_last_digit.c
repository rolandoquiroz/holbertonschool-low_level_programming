#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: An int that will be checked for last digit
 *
 *Return: An int
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
else
{
n = n;
}
_putchar('0' + (n % 10));
return (n);
}
