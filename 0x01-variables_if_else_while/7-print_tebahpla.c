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
int num_char = 0;
int i = 0;
for (i = 122 ; i > 96 ; i--)
{
putchar(num_char + i);
}
putchar('\n');
return (0);
}
