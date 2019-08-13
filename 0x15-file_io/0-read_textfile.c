#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to stdout.
 * @filename: Name of the file to be written
 * @letters: Number of letters to read and print
 * Return: Number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_to_write, num_to_read;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
		return (0);
	if (filename == NULL || letters == 0)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	num_to_read = read(fd, buffer, letters);
	if (num_to_read < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	num_to_write = write(STDOUT_FILENO, buffer, num_to_read);
	if (num_to_write <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (num_to_write);
}
