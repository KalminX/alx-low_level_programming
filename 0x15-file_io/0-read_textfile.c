#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * @filename: the name of the file
 * @letters: the text to be written
 * Return: returns the number of characters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	size_t nread;
	char *buff = malloc(letters + 1);

	if (buff == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	nread = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, nread);
	free(buff);
	close(fd);
	return (nread);
}
