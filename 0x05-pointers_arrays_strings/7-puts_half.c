#include "holberton.h"
/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: *str is the string to be processed
 *
 * Return: void.
 */
void puts_half(char *str)
{
int i = 0;
int len = 0;
while (str[len] != 0)
{
len++;
}

if (len % 2 != 0)
{
i = (len + 1) / 2;
while (i < len)
{
_putchar(str[i]);
i++;
}
}
else
{
i = len / 2;
while (i < len)
{
_putchar(str[i]);
i++;
}
}
_putchar(10);
return;
}
