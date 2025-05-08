#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search through
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the first matching byte in @s, or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	char *aux;

	while (*s)
	{
		aux = accept;
		while (*aux)
		{
			if (*s == *aux)
				return (s);
			aux++;
		}
		s++;
	}

	return ('\0');
}
