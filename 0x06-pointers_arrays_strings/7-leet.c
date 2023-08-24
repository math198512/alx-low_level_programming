#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: input string.
 * Return: str.
 */
char *leet(char *str)
{
	int i, j;
	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == letters[j] ||
			 str[i] - 32 == letters[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
