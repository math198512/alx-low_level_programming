#include "main.h"
/**
*print_triangle - prints a triangle, followed by a new line.
*@size: input parameter.
*Return: nothing.
*/
void print_triangle(int size)
{
	int k, l, j;

	if (size > 0)
	{
		l = 0;
		k = size - 1;
		while (l < size)
		{
			k = size - 1 - l;
			j = l + 1;
			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
