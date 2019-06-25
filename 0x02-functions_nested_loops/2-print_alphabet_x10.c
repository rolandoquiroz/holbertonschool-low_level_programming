#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int h, i;
for (h = 0; h < 10 ; h++)
{
for (i = 97; i < 123 ; i++)
{
_putchar(i);
}
_putchar(10);
}
return;
}
