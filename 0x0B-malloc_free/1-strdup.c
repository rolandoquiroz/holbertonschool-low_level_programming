#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a copy of the string given as a parameter.
 *
 * @str: String given as a parameter.
 *
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int i, leng;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		leng = 0;
		while (str[leng] != '\0')
		{
			leng++;
		}

		s = (char *)malloc((leng + 1) * sizeof(char));

		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (leng + 1); i++)
		{
			s[i] = str[i];
		}
		return (s);
		}

	}
}
