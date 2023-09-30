#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input number.
 * @index: the index of the bit you want to change.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	unsigned int temp;
	
	if (index > 64)
                return (-1);
	
	temp = index;
        for (p = 1; temp > 0; temp--, p *= 2)
                ;
	if ((*n >> index) & 1)
	*n -= p;

        return (1);
}
