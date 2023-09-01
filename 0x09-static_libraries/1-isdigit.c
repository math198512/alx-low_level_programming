#include "main.h"
/**
 * _isdigit -  checks for uppercase character.
 * @c: character to test.
 * * Return: 1 for digit character, 0 if it is not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
