#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: -1 if function fails
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int buffer;
	int sol;
	int counter;

	sol = 1;
	counter = 0;

	if (filename == NULL)
		return (-1);

	buffer = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (buffer == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[counter])
			counter++;
		sol = write(buffer, text_content, counter);
	}

	if (sol == -1)
		return (-1);

	close(buffer);
	return (1);
}
