#include "holberton.h"
/**
 * leet -  function that encodes a string into 1337
 * @s: char pointer
 * Return: char
 */
char *leet(char *s)
{
char d[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
char v[] = {'4', '3', '0'};
int i, int j;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (j < 100)
{
if (s[i] == d[i][j] && d[i][j] != ' ')
s[i] = v[i];
else
break;
j++;
}
i++;
}
return (s);
}
