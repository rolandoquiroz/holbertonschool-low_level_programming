#include "holberton.h"
/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: char *s String to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
{
++len;
}
len = len - 1;
while (s[len] >= 0)
{
_putchar(s[len]);
if (len == 0)
{
break;
}
len--;
}
_putchar(10);
return;
}
