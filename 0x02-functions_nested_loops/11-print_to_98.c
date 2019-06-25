#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int n to begin from
 * Return: Nothing
 */
void print_to_98(int n)
{
int i , j;
if (n < 0)
{
for (i = n ; i >= -1 ; i--)
{
printf ("%d, ", n);
}
}
for (j = 0 ; j < 98 ; j++)
{
printf ("%d, ", j);
}
printf ("%d,", 98); 
return;
}
