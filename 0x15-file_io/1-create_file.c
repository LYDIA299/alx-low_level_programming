#include "main.h"

/**
 * create_file - creates a file
 * @filename: is the name of the file
 * @text_content: string to write
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, nwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	nwr = write(fd, text_content, nletters);
	if (nwr == -1)
		return (-1);

	close(fd);

	return (1);
}
