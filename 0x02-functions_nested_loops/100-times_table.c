#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input number. (n between 0 and 15)
 * * Return: nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int p;
	int d;
	int o;
	int h;

	for (j = 0; j <= n; j++)
	{
		if (n < 0 || n > 15)
		{
			break;
		}
		for (i = 0; i <= n; i++)
		{
			p = i * j;
			if (i == 0)
			{
				_putchar(p + '0');
			}
			else if (p < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10 && p < 100)
			{
				d = p / 10;
				o = p % 10;
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(o + '0');
			}
			else if (p >= 100)
			{
				h = p / 100;
				d = (p - h * 100) / 10;
				o = p % 10;
				_putchar(' ');
				_putchar(h + '0');
				_putchar(d + '0');
				_putchar(o + '0');
			}
			if (i != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
