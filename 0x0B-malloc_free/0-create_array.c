#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array, and initializes it with a specific char.
 * @size: The size of the array
 * @c: Specific char to initialize the array
 *
 * Return: char, 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	/* malloc() allocate the memory for zise chars */
	str = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
		}
	}
}
