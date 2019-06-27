#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line
*
* @n: n is the number of times the character \ should be printed
*
* Return: nothing
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < n ; j++)
{
if (j <= i)
{
if (i == j)
{
_putchar(92);
}
else
{
_putchar(32);
}
}
}
_putchar(10);
}
}
else
{
_putchar(10);
}
return;
}
