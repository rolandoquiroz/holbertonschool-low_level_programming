#include "holberton.h"
int print_last_digit(int n)
{
n = _abs(n);
_putchar('0' + (n % 10));
return (n);
}
