#include "main.h"
#include <stdio.h>

int file_closer(int);
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, EndFile = 1, form = -1, fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	form = open(argv[1], O_RDONLY);
	if (form < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		file_closer(form);
		exit(99);
	}

	while (EndFile)
	{
		EndFile = read(form, buffer, 1024);
		if (EndFile < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			file_closer(form);
			file_closer(fd);
			exit(98);
		}
		else if (EndFile == 0)
			break;
		bytes_read += EndFile;
		error = write(fd, buffer, EndFile);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			file_closer(form);
			file_closer(fd);
			exit(99);
		}
	}
	error = file_closer(fd);
	if (error < 0)
	{
		file_closer(form);
		exit(100);
	}
	error = file_closer(form);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * file_closer - A function that closes a file and prints
 * error when closed file
 * @Error_desc: Error_desc for closed file
 * Return: 1 on success, -1 on failure
 */
int file_closer(int Error_desc)
{
	int error;

	error = close(Error_desc);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Error_desc);
	return (error);
}
