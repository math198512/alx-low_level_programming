#include "main.h"
/**
*print_square - prints a square, followed by a new line.
*@size: input parameter.
*Return: nothing.
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			
				if (j == size - 1)
				{
					_putchar('\n');
				}
			}	
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
