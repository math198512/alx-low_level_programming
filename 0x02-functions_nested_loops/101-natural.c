#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are multiples of 3 or 5
 * Return: 0.
 */
int main(void)
{
	int i, s;

	s = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
