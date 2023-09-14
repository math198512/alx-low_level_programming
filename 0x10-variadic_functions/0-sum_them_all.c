#include "variadic_functions.h"

/**
 * sum_them_all - calculates and return the sum of all its parameters.
 * @n: first parameter.
 *
 * Return: 0 if n is null or sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	s = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}
	va_end(args);
	return (s);
}
