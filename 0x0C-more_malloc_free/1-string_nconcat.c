#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: size of the memory to be allocated.
 * @s2: size of the memory to be allocated.
 * @n: size of the memory to be allocated.
 *
 * Return: pointer to the address of the memory block or
 * exit(98) if function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j, l, index;

	index = n;
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
	array = malloc(sizeof(char) * (index + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (l = 0; s2[l] != '\0' && l < n; l++)
	{
		array[l + i] = s2[l];
	}
	array[index] = '\0';
	return (array);
}
