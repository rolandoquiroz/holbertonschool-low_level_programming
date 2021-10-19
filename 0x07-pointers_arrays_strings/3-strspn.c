#include "holberton.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: char *s
 *
 * @accept: char *accept
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0, i = 0;
	while (s[i] != '\0')
	{
		if (counter != i)
			break;
		j = 0;
		while (s[j] != '\0')
		{
			if (s[i] == accept[j])
				counter++;
			j++;
		}
		i++;
	}

	return (counter);
}
