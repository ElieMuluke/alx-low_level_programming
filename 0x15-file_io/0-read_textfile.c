#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads the text file and prints it to the STDOUT.
 * @filename: text file that should be read
 * @letters: number of letters that would need to be read
 * Return: w- then number of bytes read
 *        0 when function failed or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	ssize_t w;
	ssize_t r;
	char *buff;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fp, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(fp);
	return (w);
}
