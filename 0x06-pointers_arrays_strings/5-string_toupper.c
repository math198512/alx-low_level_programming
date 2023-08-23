#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: input string.
 * Return: str.
 */

char *string_toupper(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (str[j] > 96 && str[j] < 123)
		{
			str[j] -= 32;
		}
	}
	return (str);
}
