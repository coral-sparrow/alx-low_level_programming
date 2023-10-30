#include "main.h"
#include <string.h>

/**
 * append_text_to_file - prints all the elements of a linked list
 * @filename: linked list of type listint_t to print
 * @text_content: letters to read
 *
 * Return: 1 on success or -1 on faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	size_t i = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);


	buffer = text_content;

	/* open the file with append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
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
