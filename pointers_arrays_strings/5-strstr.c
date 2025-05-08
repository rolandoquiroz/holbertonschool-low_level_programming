#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n, *start;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		start = haystack;
		n = needle;
		h = haystack;

		while (*h == *n && *h != '\0' && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (start);

		haystack++;
	}

	return (NULL);
}
