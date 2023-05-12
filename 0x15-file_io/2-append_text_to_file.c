#include "main.h"

/**
 * append_text_to_file - It appends text to a file's end.
 * @filename: represents the name of a file.
 * @text_content: content to be appended at the end of the file.
 *
 * Return: If fail or filename is NULL it returns -1.
 *         If file does not exist user is deprivedd write permissions return -1.
 *         If successful returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;
	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);
	if (a == -1 || w == -1)
		return (-1);
	close(a);
	return (1);
}
