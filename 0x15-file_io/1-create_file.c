#include "main.h"

/**
 * create_file - prints all the elements of a linked list
 * @filename: linked list of type listint_t to print
 * @text_content: letters to read
 *
 * Return: 1 on success or -1 on faliure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w, i = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);

	buffer = text_content;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (*buffer++)
			i++;

		w = write(fd, text_content, i + 1);
		if (w < 0 || w < i + 1)
			return (-1);
	}

	close(fd);
	buffer = NULL;
	return (1);
}
