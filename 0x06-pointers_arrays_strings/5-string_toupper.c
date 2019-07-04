#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: char *s
 *
 * Return: char
 */
char *string_toupper(char *s)
{
int len, i;
len = 0;
while (s[len] != '\0')
{
len++;
}
i = 0;
while (i < len)
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] =  s[i] - 32;
}
i++;
}
return (s);
}
