#include "holberton.h"
/**
 * _memcpy - Function that copies memory area.
 *
 * @s: char *dest
 *
 * @b: char *src
 *
 * @n: unsigned int n
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

while (n--)
*dest++ = *src++;
return dest;
}
