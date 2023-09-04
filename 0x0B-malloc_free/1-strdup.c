#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: input string.
 * Return: a pointer to the duplicated string. It returns
 * NULL if insufficient memory was available, and NULL if str = NULL.
 */

char *_strdup(char *str)
{
	char *array;
	int i, j, index;

	index = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		index++;
	}
	array = malloc(sizeof(char) * (index + 1));
	for (i = 0; i < index; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
