#include "main.h"
/**
*print_diagonal - prints a diagonal line of length n.
*@n: input parameter.
*Return: nothing.
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar(92);
			if (i == n-1)
			{
				if (i != 1)
				{
					continue;
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
