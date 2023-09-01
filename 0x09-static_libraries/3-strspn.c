#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input string.
 * @accept: bytes to look from.
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{	unsigned int i, j;
	unsigned int c;

	c = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] && i < c)
			{
				c++;
				break;
			}
		}
	}
	return (c - 1);
}
