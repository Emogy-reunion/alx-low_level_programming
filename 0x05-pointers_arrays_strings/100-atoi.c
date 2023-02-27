#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int a = 0, sign = 1;
	unsigned int num = 0;

	while (s[a] != '\0')
	{
		if ((s[a] < '0' || s[a] > '9') && (s[a] == '-'))
		{
			sign = sign * -1;
		}
		else if ((s[a] >= '0' && s[a] <= '9'))
		{
			num = num * 10 + (s[a] - '0');
			if ((s[a + 1] < '0' || s[a + 1] > '9'))
			{
				break;
			}
		}
		a++;
	}
	return (num * sign);
}
