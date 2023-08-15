#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0.
 */
int main(void)
{
	int i;
	long int fib_n, fib_n_1, fib, temp;

	fib_n = 2;
	fib_n_1 = 1;
	printf("%ld,  %ld, ", fib_n_1, fib_n);
	for (i = 3 ; i <= 50; i++)
	{
		fib = fib_n_1 + fib_n;
		printf("%ld, ", fib);
		temp = fib_n;
		fib_n = fib;
		fib_n_1 = temp;
	}
	printf("\n");
	return (0);
}
