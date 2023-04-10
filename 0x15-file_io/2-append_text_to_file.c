#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - returns string length of input string
 * @s: string to check length of
 * Return: length of string
 */
size_t  _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * append_text_to_file - function to append text at the end of the file
 * @filename: pointer to the file
 * @text_content: content that needs to be appended
 *
 * Return: 1 on sucess -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);

	if (write(fd, text_content, _strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}

	return (close(fd) == -1 ? -1 : 1);
}
