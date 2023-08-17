#include "main.h"
/**
 * _isupper -  checks for uppercase character.
 * @c: character to test.
 * * Return: 1 lowercase letter, 0 if it is not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
