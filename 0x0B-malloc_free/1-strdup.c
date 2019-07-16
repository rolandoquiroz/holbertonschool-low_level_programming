#include "holberton.h"
#include <stdlib.h>

/**
 * str_len - Measures a string lenght
 *
 * @str: String to be measured
 *
 * Return: unsigned int lenght of the string
 */

unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	for (len = 0 ;; ++len)
	{
		if (str[len] == 0)
		return (len);
	}

/**
 * _strdup - Returns a pointer to a copy of the string given as a parameter.
 *
 * @str: String given as a parameter.
 *
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	/* malloc() allocate the memory for zise chars */
	s = (char *)malloc(str_len(*str) * sizeof(char));

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < str_len(*str); i++)
		{
			s[i] = str[i];
		}

		return (s);

		}
	}
}
