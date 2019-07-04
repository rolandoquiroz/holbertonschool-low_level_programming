#include "holberton.h"
/**
 * _atoi - Function that convert a string to an integer.
 *
 * @s: *s String to be converted to integer
 *
 * Return: An int
 */
int _atoi(char *s)
{

  int len, _sign, num;

  len = 0;

  while (s[len] != 0)
    {
      len++;
    }


_sign = 1;
while ((*s) == '-')
{
if (*s == '-')
_sign = _sign * -1;
s++;
}
num = 0;
while ((*s >= '0') && (*s <= '9'))
{
num = (num * 10) + ((*s) - '0');
s++;
}
return (_sign*num);
}

