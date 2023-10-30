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
	int fd;
	ssize_t i, j;
	char *s;

	if (filename == NULL)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (!s)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free (s);
		return (0);
	}


	i = read(fd, s, letters);
	if (i < 0)
	{
		free (s);
		return (0);
	}

	j = write(1, s, i);
	if ((j < 0) || (j < i))
	{
		free (s);
		return (0);
	}

	free(s);
	close(fd);
	return (j);
}
