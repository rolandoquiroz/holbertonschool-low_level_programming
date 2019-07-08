#include "holberton.h"
/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: char *dest
 *
 * @b: char *src
 *
 * @n: unsigned int n
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while ((n--) > 0)
*ptr++ = b;
return (ptr);
}
