#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fof;
	int check;

	if (!filename)
		return (-1);

	fof = open(filename, O_WRONLY | O_APPEND);

	if (fof == -1)
		return (-1);

	if (text_content)
	{
		check = write(fof, text_content, strlen(text_content));
		if (check == -1)
			return (-1);
	}

	close(fof);

	return (1);
}