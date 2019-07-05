#include "holberton.h"
/**
 * string_toupper - Function that capitalizes all words of a string.
 *
 * @s: char *s
 *
 * Return: char
 */
char *cap_string(char *s)
{

int i, j;
i = 0;

while (s[i] != '\0')
{
i++;
}

for (j = 0; j < i ; j++)
{
if (s[j] == 9 || s[j] == 10 || s[j] == 32 || s[j] == 33 || s[j] == 34 || s[j] == 40 || s[j] == 41 || s[j] == 44 || s[j] == 46 || s[j] == 59 || s[j] == 63 || s[j] == 123 || s[j] == 125)
{
if (s[1 + j] >= 97 && s[1 + j] <= 122)
{
s[1 + j] = s[1 + j] - 32;
}
}
}
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
return (s);
}
