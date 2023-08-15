#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input number. (n between 0 and 15)
 * * Return: nothing.
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(48);
			for (i = 1; i <= n; i++)
			{
				p = j * i;
				_putchar(',');
				_putchar(' ');
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (p >= 100)
				{
					_putchar(p / 100 + '0');
					_putchar((p - (p / 100) * 100) / 10 + '0');
					_putchar(p % 10 + '0');
				}
				if (i != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}

