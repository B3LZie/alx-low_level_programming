#include "main.h"

/**
 * append_text_to_file - append text to file
 * do not create the file if its missing
 * @filename: name of file
 * @text_content: the text
 *
 * Return: 1 success -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	w = write(fd, text_content, i);
	if (w != i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
