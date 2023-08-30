#include "main.h"

/**
 * is_prime_number - checks if an integer is prime.
 * @n: input integer.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int s;

	s = n / 2;
	if (n <= 1)
	{
		return (0);
	}
	return (helper2(n, s));
}

/**
 * helper2 - helper function to is_prime_number.
 * @n: input number.
 * @s: number to start looking from..
 * Return: 1 if n is prime, 0 otherwise.
  */

int helper2(int n, int s)
{
	if (s <= 1)
	{
		return (1);
	}
	else if (n % s == 0)
	{
		return (0);
	}
	return (helper2(n, s - 1));
}
