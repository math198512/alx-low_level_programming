#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: char string to concatenate to
 * @dest: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
