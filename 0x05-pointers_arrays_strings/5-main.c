#include "holberton.h"
#include <stdio.h>

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
