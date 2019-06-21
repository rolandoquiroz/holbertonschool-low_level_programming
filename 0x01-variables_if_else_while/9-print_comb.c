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
for (i = 48 ; i < 58 ; i++)
{
if (i < 57)
{
putchar(i);
putchar(44);
putchar(32);
}

if (i == 57)
{
putchar(i);
}
}
putchar('\n');
return (0);
}
