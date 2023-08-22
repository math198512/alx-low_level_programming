#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string pointer.
 * Return: nothing.
*/
void rev_string(char *s)
{
	int i, j, l, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (j = 0; j < l / 2; j++)
	{
		temp = s[j];
		s[j] = s[l - j - 1];
		s[l - j - 1] = temp;
	}
}
