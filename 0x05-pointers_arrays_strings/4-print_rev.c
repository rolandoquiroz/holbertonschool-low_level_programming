#include "holberton.h"
/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: char *s String to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
int len, i;
len = 0;
while (s[len] != '\0')
{
++len;
}
len = len - 1;
i = len;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar(10);
return;
}
