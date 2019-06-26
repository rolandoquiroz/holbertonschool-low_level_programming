#include "holberton.h"
void jack_bauer(void)
{
int h, i, j, k;
for (h = 0 ; h <= 2; h++)
{
for (i = 0 ; i <= 9; i++)
{
for (j = 0 ; j <= 5 ; j++)
{
for (k = 0 ; k <= 9 ; k++)
{
_putchar('0' + h);
_putchar('0' + i);
_putchar(58);
_putchar('0' + j);
_putchar('0' + k);
_putchar(10);
}
if ((j == 5) && (k == 9))
break;
}
if ((h == 2) && (i == 3))
break;
}
}
_putchar(10);
return;
}
