#include "holberton.h"
int print_sign(int n)
{
int my_answer;
if (n > 0)
{
_putchar('+');
my_answer = 1;
}
else if (n == 0)
{
_putchar('0');
my_answer = 0;
}
else
{
_putchar('-');
my_answer = -1;
}
return (my_answer);
}
