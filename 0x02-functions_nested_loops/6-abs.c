#include "holberton.h"
int _abs(int n)
{
int my_answer;
if (n > 0)
{
my_answer = n;
}
else if (n == 0)
{
my_answer = 0;
}
else
{
my_answer = -n;
}
return (my_answer);
}
