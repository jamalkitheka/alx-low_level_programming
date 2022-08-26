#include "main.h"

/**
 * _strlen - finds the length of string
 * @str: pointer to the string
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * create_file - creates a file
 * @filename: the file which should be read
 * @text_content: a null terminating string to write to the file
 * Description: if the content is NULL, an empty file is created
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result;
	size_t count = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
	{
		write(1, "Opening failed", 15);
		return (-1);
	}
	result = write(fd, text_content, count);
	if (result <= 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
