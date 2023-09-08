#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum number to be included in the array.
 * @max: maximium number to be included in the array.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = min + i;

	}
	return (array);
}
