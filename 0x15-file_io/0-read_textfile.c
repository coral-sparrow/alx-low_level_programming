#include "main.h"

/**
 * read_textfile - prints all the elements of a linked list
 * @filename: linked list of type listint_t to print
 * @letters: letters to read
 *
 * Return: number of nodes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd < 0)
		goto clean;

	r = read(fd, buffer, letters);
	if (r < 0)
		goto clean;

	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0 || w < r)
		goto clean;

	free(buffer);
	close(fd);
	return (w);

clean:
	free(buffer);
	return (0);

}

