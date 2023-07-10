#include "main.h"
/**
 * create_file- creates file with filename and writes to it text_content.
 * @filename: name of the file to be created
 * @text_content: content to print in file
 * Return: -1 in case of failure and 1 in case of success.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, w, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);
	if (fp == -1 || w == -1)
		return (-1);
	close(fp);
	return (1);
}
