#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text file  to be printed to STDOUT.
 * @filename: file to read
 * @letters: no of characters to be read
 * Return: w- the actual number of bytes to  read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *stor;
	ssize_t filede;
	ssize_t r;
	ssize_t w;

	if (filename == NULL)
		return (0);

	filede = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	stor = malloc(sizeof(char) * letters);
	if (stor == NULL)
		return (0);

	r = read(filede, stor, letters);
	if (r == -1)
	{
		free(stor);
		close(filede);
		return (0);
	}

	w = write(STDOUT_FILENO, stor, r);
	if (w == -1)
	{
		free(stor);
		close(filede);
		return (0);
	}
	close(filede);
	return (r);
}
