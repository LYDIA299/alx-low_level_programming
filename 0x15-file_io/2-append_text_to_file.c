#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 success or -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, nwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0334);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; filename[nletters]; nletters++)
			;

		nwr = write(fd, text_content, nletters);

		if (nwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
