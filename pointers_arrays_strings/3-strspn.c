#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to accept
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		/**
		 * Reset 'a' to the start of 'accept' for each new character in 's'
		 */
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (!*a)  /* if we didn't find a match in accept */
			break;
		s++;
	}

	return (count);
}
