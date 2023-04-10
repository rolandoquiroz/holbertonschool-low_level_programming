#include "holberton.h"
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
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the file
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = NULL;
	ssize_t letters_to_write;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	if (read(fd, buffer, letters) == -1)
	{
		free(buffer);
		return (0);
	}

	letters_to_write = write(STDOUT_FILENO, buffer, _strlen(buffer));

	if (letters_to_write == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (close(fd) == -1 ? -1 : letters_to_write);
}
