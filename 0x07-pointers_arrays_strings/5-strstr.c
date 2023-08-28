#include "main.h"

/**
 * _strstr - .finds the first occurrence of the
 * substring needle in the string haystack.
 * @haystack: input string.
 * @needle: bytes string to look for.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack = haystack + 1;
	}
	return ('\0');
}

