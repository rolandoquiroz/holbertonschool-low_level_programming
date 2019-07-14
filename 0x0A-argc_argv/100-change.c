#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Prints the Minimal Number of Coins for Change
 *
 * @argc: Number of arguments supplied
 *
 * @argv: Pointer to array of arguments supplied
 *
 * Return: Int: 0 Success | 1 Error
 */

int main(int argc, char **argv)
{
  int i, j, k, l, m, s, c;
  s = 0;
  c = atoi(argv[1]);
  if (argc == 2)
    {
      if (c < 0)
	{
	  printf("0\n");
	}
      else
	{
	  if (c >= 25)
	    {
	      while (c >= 25)
		{
		  c -= 25;
		  i++;
		}
	      if (c >= 10)
		{
		  while (c >= 10)
		    {
		      c -= 10;
		      j++;
		    }
		  if (c >= 5)
		    {
		      while (c >= 5)
			{
			  c -= 5;
			  k++;
			}
		      if (c >= 2)
			{
			  while (c >= 2)
			    {
			      c -= 2;
			      l++;
			    }
			}
		      if (c >= 1)
			{
			  while (c >= 1)
			    {
			      c -= 1;
			      m++;
			    }
			  s = i + j + k + l + m;
			  printf("%d\n", s);
			}
		    }
		  else
		    {
		      printf("Error\n");
		      return (1);
		    }
		  return (s);
		}
