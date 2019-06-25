#include "holberton.h"
int print_last_digit(int n)
{
if (n < 0)
n = -n;
else
n = n;
_putchar('0' + (n % 10));
return (n % 10);
}
