#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms (less than 4000000.
 * Return: 0.
 */
int main(void)
{
	int i;
	long int fib_n, fib_n_1, fib, s;

	s = 2;
	fib_n = 2;
	fib_n_1 = 1;
	for (i = 0 ; i <= 48; i++)
	{
		if (fib < 4000000 && (fib % 2) == 0)
		{
			s = s + fib;
		}
		fib = fib_n_1 + fib_n;
		fib_n_1 = fib_n;
		fib_n = fib;
	}
	printf("%ld\n", s);
	return (0);
}
