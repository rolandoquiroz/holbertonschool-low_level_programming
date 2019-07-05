#include "holberton.h"
/**
 * string_toupper - Function that prints an integer
 *
 * @n: int n
 *
 * Return: void
 */
void print_number(int n)
{

  if (n < 0) { 
   _putchar('-'); 
    n = -1*n; 
  } 
   
  if (n/10) 
    _putchar(n/10); 
   
 _putchar(n%10 + '0'); 

return;
}
