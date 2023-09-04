#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: The name of the file to read.
 * @num_letters: The number of letters to print.
 *
 * Return: The number of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	int file_descriptor;
	ssize_t num_bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(num_letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}
	num_bytes_read = read(file_descriptor, buffer, num_letters);

	if (num_bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)num_bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
