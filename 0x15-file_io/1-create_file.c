#include "main.h"
/**
 * create_file - Creates a file and writes content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	int check, writ;

	if (!filename)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}

	check = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(check, text_content, strlen(text_content));

	if (check == -1 || writ == -1)
	{
		return (-1);
	}

	return (1);
}
