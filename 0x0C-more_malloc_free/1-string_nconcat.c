#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of characters to be copied
 *
 * Return: copied
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int size1 = 0, size2 = 0, i;

	/*if NULL is passed, treat as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* While at index 0 */
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n >= size2)
		n = size2;

	z = malloc(sizeof(char) * n + size1 + 1);

	if (z == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		z[i] = s1[i];
	}
	for (i = 0; i < (n); i++)
	{
		z[i + size1] = s2[i];
	}
	z[i + size1] = '\0';
	return (z);
}

