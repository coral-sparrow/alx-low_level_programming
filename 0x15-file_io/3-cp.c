#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_READ 1024

/**
 * check_open_src - check if the source file can be open for read.
 * @fd: the file descriptor from open function.
 * @file: file path.
 *
 * Return: Nothing.
 */
void check_open_src(int fd, char *file)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}

/**
 * check_open_dst - check if the dest file can be open for write.
 * @fd: the file descriptor from open function.
 * @file: file path.
 *
 * Return: Nothing.
 */
void check_open_dst(int fd, char *file)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

/**
 * check_read_count - check if read sys call can read correctly from file.
 * @read_count: the count returned from read syscall.
 * @file: file path.
 *
 * Return: Nothing.
 */
void check_read_count(int read_count, char *file)
{
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}

/**
 * check_write_count - check if write sys call can write correctly from file.
 * @write_count: the count returned from write syscall.
 * @file: file path.
 *
 * Return: Nothing.
 */
void check_write_count(int write_count, char *file)
{
	if (write_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

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
	ssize_t read_count, write_count;
	size_t count = MAX_READ;
	char buf[MAX_READ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	src_fd = open(argv[1], O_RDONLY);
	check_open_src(src_fd, argv[1]);
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	check_open_dst(dest_fd, argv[2]);
	do {

		read_count = read(src_fd, buf, count);
		check_read_count(read_count, argv[1]);
		write_count = write(dest_fd, buf, read_count);
		check_write_count(write_count, argv[2]);
	} while (read_count != 0);

	close_s = close(src_fd);
	close_d = close(dest_fd);
	if (close_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		return (100);
	} else if (close_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		return (100);
	}
	return (0);
}
