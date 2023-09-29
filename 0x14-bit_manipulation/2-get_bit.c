#include "main.h"
#include <stdio.h>

/**
 * get_bit - prints the binary representation of a number.
 * @n: input number.
 * @index: the index of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
