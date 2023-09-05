#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the 2d array to be allocated.
 * @height: the height  of the 2d array to be allocated.
 * Return: a pointer to the result of cancatenation.
 */

int **alloc_grid(int width, int height)
{
	char **grid;
	int i, j, k, l, index;

	index = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		index++;
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		index++;
	}
	grid = malloc(sizeof(int) * (width + 1) * (height + 1));
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
