#include "holberton.h"
/**
 * _strcat - Function that concatenates two strings
 *
 * @dest: char *dest
 *
 * @src: char *src
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{

int i, j;

i = 0;
while (src[i] != '\0')
{
i++;
}

j = 0;
while (dest[j]  !=  '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
