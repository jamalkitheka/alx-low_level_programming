#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file which should be read
 * @text_content: a null terminating string to write to the file
 * Description: if the content is NULL, an empty file is created
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result, x;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (x = 0; text_content[x] != '\0'; x++)
			;
		result = write(fd, text_content, x);
		if (result == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
