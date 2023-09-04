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
	ssize_t filed;
	ssize_t m;
	ssize_t g;

	/*open file*/
	filed = open(filename, O_RDONLY);
	/*check is file is open*/
	if (filed == -1)
		return (0);
	/*dynamically allocate memory*/
	stor = malloc(sizeof(char) * letters);
	g = read(filed, buf, letters);
	m = write(STDOUT_FILENO, stor, g);

	free(stor);
	close(filed);
	return (m);
}
