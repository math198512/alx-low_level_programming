#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found.
 * @s: source memory area.
 * @c: character we are looking for.
 * Return: pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{	int i, t;

	t = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			t++;
			break;
		}
	}
	if (t != 0)
		s = s + i;
	else
		s = '\0';
	return (s);
}
