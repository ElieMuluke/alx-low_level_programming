#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates a buffer that allocates 1024 bytes.
 * @file: The file buffer's name is "storing chars for."
 *
 * Return: the freshly allocated buffer's pointer.
 */
char *create_buffer(char *file)
{
	char *a_buffer;

	a_buffer = malloc(sizeof(char) * 1024);

	if (a_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (a_buffer);
}

/**
 * close_file - This function cloeses the file descriptors.
 * @fd: The file descriptor to close is passed through this variable.
 */
void close_file(int fd)
{
	int cs;

	cs = close(fd);

	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This function duplicates the data from one file and writes it to another file.
 * @argc: This refers to the count of input values that were given to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 when successful.
 *
 * Description: If the argument count is incorrect, exit with code 97.
 * 				If the file specified as file_from does not exist or cannot be read, exit with code 98.
 * 				If the file specified as file_to cannot be created or written to, exit with code 99.
 * 				If either file_to or file_from cannot be closed, exit with code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wt = write(to, buffer, rd);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
