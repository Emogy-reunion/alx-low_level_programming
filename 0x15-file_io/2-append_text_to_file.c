#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends txt at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 * If file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	int len = 0;
	int w;

	if (filename == NULL)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(filed, text_content, len);
	if (w == -1)
	{
		close(filed);
		return (-1);
	}
