#include "holberton.h"
/**
* more_numbers -  prints 10 times numbers, from 0 to 14.
*
* Return: nothing
*/
void more_numbers(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 15 ; j++)
{
if ((j / 10) > 0)
_putchar('0' + (j / 10));
_putchar('0' + (j % 10));
if (j == 14)
_putchar(10);
}

}
return;
}
