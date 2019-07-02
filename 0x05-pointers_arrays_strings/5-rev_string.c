#include "holberton.h"
/**
 * rev_string -  reverse a string
 * @s: char
 * Return: void.
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
int len = 0;
char r[1000];

while (s[len] != 0)
{
len++;
}
len--;
for (i = len; i >= 0; i--)
{
r[j] = s[i];
j++;
}
for (i = 0; i <= len; i++)
{
s[i] = r[i];
}
return;
}
