#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: input string.
 * Return: str.
 */
char *cap_string(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
	for (j = 1; j < i; j++)
	{
		if ((str[j - 1] == ' ' ||
				str[j - 1] == '\t' ||
				str[j - 1] == '\n' ||
				str[j - 1] == ',' ||
				str[j - 1] == ';' ||
				str[j - 1] == '.' ||
				str[j - 1] == '!' ||
				str[j - 1] == '?' ||
				str[j - 1] == '"' ||
				str[j - 1] == '(' ||
				str[j - 1] == ')' ||
				str[j - 1] == '{' ||
				str[j - 1] == '}') && (str[j] > 96 && str[j] < 123))
			{str[j] -= 32;
			}
	}
	return (str);
}
