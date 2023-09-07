#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: size of the memory to be allocated.
 * @s2: size of the memory to be allocated.
 * @n: size of the memory to be allocated.
 *
 * Return: a pointer to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j, l, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 ==  NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		;
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		;
	}
	array = malloc(sizeof(char) * (j + n + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		array[i] = s1[i];
	}
	for (l = 0; l < n; l++)
	{
		array[l + i] = s2[l];
	}
	array[i + l] = '\0';
	return (array);
}
