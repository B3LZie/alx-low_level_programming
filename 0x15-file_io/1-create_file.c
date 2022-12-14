#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file to be created
 * @text_content: the text to write
 *
 * Return: 1 success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		w = write(fd, text_content, i);
	}
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
