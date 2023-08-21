#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: input int pointer.
 * @b: input int pointer.
 * Return: nothing.
*/
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
