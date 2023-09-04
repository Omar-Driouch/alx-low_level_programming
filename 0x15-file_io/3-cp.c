#include "main.h"
#define BUFFER_SIZE 1024

/**
 * copy_file - Copies the content of one file to another.
 * @src_filename: The name of the source file to copy from.
 * @dest_filename: The name of the destination file to copy to.
 *
 * Return: On success, returns 0. On failure, returns an error code.
 */

void copy_file(const char *src_filename, const char *dest_filename)
{
	int fd_from, fd_to, rd_bytes, wr_bytes;
	char buffer[BUFFER_SIZE];

	fd_from = open(src_filename, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		exit(98);
	}
	fd_to = open(dest_filename, O_WRONLY | O_CREAT |
	O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		close(fd_from);
		exit(99);
	}
	while ((rd_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (rd_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
}

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
