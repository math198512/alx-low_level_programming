#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the integer to be calculated.
 * * Return: n if n is positive, 0 if n is zero and -n if n is negative.
 */
int _abs(int n)
{
	int opposite;

	if (n > 0)
	{
	return (n);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	opposite = -n;
	return (opposite);
	}
}
