#include "holberton.h"
/**
* print_triangle - function that prints a triangle, followed by a new line.
*
* @size: is the size of the triangle
*
* Return: nothing
*/
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = size  ; i >= 1 ; i--)
{
for (j = 1 ; j <= i ; j++)
{
_putchar(32);
}
for (k = size ; k >= i ; k--)
{
_putchar(35);
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
