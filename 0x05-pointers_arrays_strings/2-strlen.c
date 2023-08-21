#include "main.h"

/**
 * _strlen - swaps the values of two integers.
 * @s: string pointer.
 * Return: nothing.
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
