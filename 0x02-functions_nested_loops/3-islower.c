#include "main.h"
/**
 * _islower -  checks for lowercase character.
 * * Returns 1 lowercase letter, 0 if it is not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
