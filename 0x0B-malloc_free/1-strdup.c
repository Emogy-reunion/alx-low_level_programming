#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly alllocated space in memory,
 * which contains a copy of the string given as parameter
 * @str: string to be copied.
 *
 * Return: null if str is null, pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc(strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
