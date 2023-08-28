#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: recieving memory area.
 * @src: source memory area.
 * @n: denotes the number of first bytes of s to be filled
 * Return: pointer to s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

