#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number for which we want to find sqrt.
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - helper function to _sqrt_recursion
 * @num: input number.
 * @sq: eventual square root.
 * Return: square root.
 */

int helper(int num, int sq)
{
	int square;

	square = sq * sq;
	if (square == num)
	{
		return (sq);
	}
	else if (square < num)
	{
		return (helper(num, sq + 1));
	}
	else
	{
		return (-1);
	}
}
