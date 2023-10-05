#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_EXCL | O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fp, text_content, strlen(text_content));
	close(fp);
	return (1);
}
