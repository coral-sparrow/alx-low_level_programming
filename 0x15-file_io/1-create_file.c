#include "main.h"
#include <string.h>

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
	/* int c;*/
	char *buffer;

	if (filename == NULL)
		return (-1);

	/* c = strcmp(text_content, "NULL"); */

	buffer = text_content;

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (*buffer++)
			i++;

		w = write(fd, text_content, i);
		if (w < 0)
			return (-1);
	}

	close(fd);
	buffer = NULL;
	return (1);
}
