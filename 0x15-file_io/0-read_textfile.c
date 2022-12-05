#include "main.h"

/**
 * read_textfile - read the content of textfile
 * @filename: the name of file
 * @letters: the number of letters to be printed
 *
 * Return: the number of letters it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	if (w != r)
		return (0);
	return (r);
}
