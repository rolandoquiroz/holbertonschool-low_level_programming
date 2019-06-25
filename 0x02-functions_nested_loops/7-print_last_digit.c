#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: An int that will be checked for last digit
 *
 *Return: An int
 */
int print_last_digit(int n)
{
int my_ans;
int my_answer;
if (n < 0)
{
my_ans = -n;
}
else
{
my_ans = n;
}
 my_answer = my_ans % 10;
_putchar('0' + my_answer);
return (my_answer);
}
