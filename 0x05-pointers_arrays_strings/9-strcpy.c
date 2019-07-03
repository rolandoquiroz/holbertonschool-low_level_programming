#include "holberton.h"
/**
 * _strcpy - Function that copies a string.
 *
 * @dest: *dest buffer pointed to by dest
 *
 * @src: *src string pointed to by src
 *
 * Return: char. the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i = 0;
while (src[len] != 0)
{
len++;
}
i = 0;
while (i <= len)
{
dest[i] = src[i];
i++;
}
dest[len + 1] = 0;
return (dest);
}
