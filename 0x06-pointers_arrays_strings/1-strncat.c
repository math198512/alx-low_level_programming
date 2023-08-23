#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: char string to concatenate to
 * @dest: char string
 * @n: number of elements to concatenate.
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		n--;
		i++;
	}
	return (dest);
}
