#include "holberton.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: char *s
 *
 * @accept: char *accept
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, k, counter;
counter = 0;
i = 0;
while (s[i] != '\0')
{
if (counter != i)
break;
k = 0;
while (s[k] != '\0')
{
if (s[i] == accept[k])
counter++;
k++;
}
i++;
}
return (counter);
}
