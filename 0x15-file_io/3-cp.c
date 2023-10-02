#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_buffer(int filed);
char *create_stor(char *buffer);

/**
 * main - copies contents of a file to another file.
 * @argc: no of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: if the argument count is incorrect - exit code 97.
 * if file_from doesn't exist or can't be read - exit code 98.
 * if file_to can't be created or written to - exit code 99.
 * if file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int before, now, w, r;
	char *stor;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	stor = create_stor(argv[2]);
	before = open(argv[1], O_RDONLY);
	r = read(before, stor, 1024);
	now = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (before == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(stor);
			exit(98);
		}

		w = write(now, stor, r);
		if (now == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(stor);
			exit(99);
		}

		r = read(before, stor, 1024);
		now = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(stor);
	close_buffer(before);
	close_buffer(now);

	return (0);
}
/**
 * close_buffer - a function that closes file descriptors.
 * @filed: the file descriptor to be closed
 */
void close_buffer(int filed)
{
	int g;

	g = close(filed);

	if (g == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed);
		exit(100);
	}
}
/**
 * create_stor - allocates 1024 bytes for a buffer.
 * @buffer: name of file the buffer is storing characters for
 *
 * Return: pointer
 */
char *create_stor(char *buffer)
{
	char *stor;

	stor = malloc(sizeof(char) * 1024);

	if (stor == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buffer);
		exit(99);
	}

	return (stor);
}
