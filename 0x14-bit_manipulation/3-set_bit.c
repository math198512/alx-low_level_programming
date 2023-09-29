#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: input number.
 * @index: the index of the bit you want to set to 1.
 * Return: 1 is successfull or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	 if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
		}
