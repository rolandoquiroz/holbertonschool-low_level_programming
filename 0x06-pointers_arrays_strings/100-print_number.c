#include "holberton.h"
/**
 * string_toupper - Function that prints an integer
 *
 * @n: int n
 *
 * Return: void
 */
void print_number(int n)
{

char lD;
int  r;

if (n < 0)
{
_putchar('-');
lD = (char)('0' - (n % 10));
n /= -10;
}
else
{
lD = (char)((n % 10) + '0');
n /= 10;
}
r = 0;
while (n > 0)
{
r = r * 10 + (n % 10);
n /= 10;
}
while (r > 0)
{
char c = (char)((r % 10) + '0');
_putchar(c);
r /= 10;
}
_putchar(lD);
return;
}
