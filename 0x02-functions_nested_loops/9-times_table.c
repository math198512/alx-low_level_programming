#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * * Return: 0, success.
 */
void times_table(void)
{
	int i;
	int j;
	int p;
	int d;
	int o;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
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
				_putchar(p + '0');
			}
			else
			{
				d = p / 10;
				o = p % 10;
				_putchar(' ');
				_putchar(d + '0');
				_putchar(o + '0');
			}
			if (i != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
