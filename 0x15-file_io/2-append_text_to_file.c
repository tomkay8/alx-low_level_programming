#include "main.h"

/**
 * append_text_to_file - Appends text to the end of the file.
 * @filename: the name of the file to append to.
 * @text_content: The content to be add to the file.
 *
 * Return: 1 if the file exists and the operation succeeds, -1 if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
