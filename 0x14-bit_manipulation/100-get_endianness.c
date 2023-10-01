#include "main.h"

/**
 * get_endianness - checks for big endian or less endian
 *
 * Return: 1 if little endian, 0 otherwise
 */


int get_endianness(void)
{
	unsigned int temp = 1;
	char *endian = (char *)&temp;

	if (*endian)
		return (1);
	return (0);

}
