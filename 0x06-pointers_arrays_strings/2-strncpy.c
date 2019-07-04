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
  int i = 0;

  for (i = 0; (i < n && src[i] != 0); i++)
    {
      dest[i] = src[i];
    }
  for (; i < n; i++)
    {
      dest[i] = '\0';
    }
  return (dest);
}
