#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file in which text is appended at the end
 * @text_content: the text to be appended at the end of the file
 * Return: 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, x;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (x = 0; text_content[x] != '\0'; x++)
		;
	status = write(fd, text_content, x);
	if (status == -1)
		return (-1);
	close(fd);
	return (1);
}
