#include "main.h"

/**
 * leet - encodes into 1337speak
 * @str: s is the array
 * Return: Always 0
 */
char *leet(char *str)
{
	int r = 0, g;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[r] != '\0'; r++)
	{
		for (g = 0; g <= 9; g++)
		{
			if (s[g] == str[r])
			{
				str[r] = s1[g];
			}
		}
	}
	return (str);
}
