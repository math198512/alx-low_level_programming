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
{	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (s + i);
}
