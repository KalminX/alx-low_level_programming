#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: the content to be written
 * Return: Returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	fp = open(filename, O_CREAT | O_RDWR, 0600);

	if (fp == -1)
		return (-1);

	if (text != NULL)
		write(fp, text_content, strlen(text_content));
	close(fp);

	return (1);
}
