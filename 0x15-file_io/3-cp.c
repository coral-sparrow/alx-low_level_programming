#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define MAX_READ 1024

/**
 * main - prints all the elements of a linked list
 * @argc: # of the args read.
 * @argv: args vector read from cmd.
 *
 * Return: 0 on success, 97, 100 on failure.
 */


int main(int argc, char *argv[])
{
	int src_fd, dest_fd, close_s, close_d;
	ssize_t read_count;
	size_t count = MAX_READ;
	char buf[MAX_READ];

	if (argc != 3)
	{
		fprintf(fileno(stderr), "Usage: cp file_from file_to\n");
		return (97);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		fprintf(fileno(stderr), "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dest_fd == -1)
	{
		fprintf(fileno(stderr), "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	do {

		read_count = read(src_fd, buf, count);
		write(dest_fd, buf, read_count);
	} while (read_count != 0);

	close_s = close(src_fd);
	close_d = close(dest_fd);
	if (close_s == -1)
	{
		fprintf(fileno(stderr), "Error: Can't close fd %d\n", src_fd);
		return (100);
	} else if (close_d == -1)
	{
		fprintf(fileno(stderr), "Error: Can't close fd %d\n", dest_fd);
		return (100);
	}
	return (0);
}
