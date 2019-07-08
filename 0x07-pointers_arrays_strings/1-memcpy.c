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
unsigned int i;
i = 0; 
while ( i < n )
{
dest[i] = src[i];
i++;
}
return dest;
}
