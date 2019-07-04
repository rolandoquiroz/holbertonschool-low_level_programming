#include "holberton.h"
/**
 * _strncpy - Function that copies a string.
 *
 * @dest: char *dest
 *
 * @src: char *src
 *
 * @n: int n
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
 i=0;
while (i < n && src[i] != 0)
{
dest[i] = src[i];
i++;
}
i = 0;
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
