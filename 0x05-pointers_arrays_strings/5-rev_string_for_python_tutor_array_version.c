#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to be measured
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

/**
 * rev_string - reverse a string
 * @s: char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n = _strlen(s);
	char c;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "Holberton";
	char str[7] = "Holbie";
	char ch[2] = "H";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);
	printf("%s\n", ch);
	rev_string(ch);
	printf("%s\n", ch);

	return (0);
}
