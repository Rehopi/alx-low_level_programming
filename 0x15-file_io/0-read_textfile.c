#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: const char pointer input
 * @letters: size_t input
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size_R, size_W;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}

	size_R = read(fd, buffer, letters);
	if (size_R == -1)
		return (0);

	size_W = write(STDOUT_FILENO, buffer, size_R);
	if (size_W == -1)
		return (0);

	free(buffer);
	close(fd);
	return (size_R)
}
