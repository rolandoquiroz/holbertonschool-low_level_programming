#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48 ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
putchar(i);
putchar(j);
if ((i == 57) && (j == 57))
{
break;
}
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
