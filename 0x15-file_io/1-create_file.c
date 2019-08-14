#include "holberton.h"
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - returns string length of input string
 * @s: string to check length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - function to create file
 * @filename: pointer to the file name to be created
 * @text_content: str to be written in the file
 *
 * Return: 1 success -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);
	len = _strlen(text_content);
	if (write(fd, text_content, len) != len)
	{
		close(fd);
		return (-1);
	}
	return (close(fd) == -1 ? -1 : 1);
}
