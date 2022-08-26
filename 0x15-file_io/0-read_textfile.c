#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rlen, wlen;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rlen = read(fd, buffer, letters);
	close(fd);
	if (rlen == -1)
	{
		free(buffer);
		return (0);
	}
	wlen = write(STDOUT_FILENO, buffer, rlen);
	free(buffer);
	if (rlen != wlen)
		return (0);
	return (wlen);
}
