#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string pointer.
 * Return: nothing.
*/
void puts_half(char *str)
{
	int i, j, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		l = i / 2;
	}
	else
	{
		l = (i / 2) + 1;
	}
	for (j = l; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
