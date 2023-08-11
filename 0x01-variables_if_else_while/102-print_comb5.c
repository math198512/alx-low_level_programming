#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;
	int i;
	int j;
	int k;
	int l;

	for (a = 0; a <= 99 ; a++)
	{
		i = a / 10;
		j = a % 10;
		for (b = 0; b <= 99 ; b++)
		{
			k = b / 10;
			l = b % 10;
			if (i < k || (i == k && j < l))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(l + '0');
				if (i == 9 && j == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
