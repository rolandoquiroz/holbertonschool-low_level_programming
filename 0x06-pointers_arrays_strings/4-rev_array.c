#include "holberton.h"
/**
 * reverse_array -  reverse an array of integers
 *
 * @a: int *a
 *
 * @n: int n
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
  int i;
  int j;
  int repo[1000];
  j = 0;
  i = n - 1;
  while (i >= 0)
    {
      repo[j] = a[i];
      j++;
      i--;
    }
i = 0; 

 while (i < n)
    {
      a[i] = repo[i];
      i++;
    }
 return;
}
