#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area to be filled.
 * @b: constant to be filled in.
 * @n: denotes the number of first bytes of s to be filled
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

