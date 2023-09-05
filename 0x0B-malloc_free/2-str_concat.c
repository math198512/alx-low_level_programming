#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space
 * in memory which contains the contents of s1, followed by
 * the contents of s2, and null terminated.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 * Return: a pointer to the result of cancatenation.
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, k, l, index;

	index = 0;
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
		index++;
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		index++;
	}
	array = malloc(sizeof(char) * (index + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		array[l +  i] = s2[l];
	}
	array[index] = '\0';
	return (array);
}
