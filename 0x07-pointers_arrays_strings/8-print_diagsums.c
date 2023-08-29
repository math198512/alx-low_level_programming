#include "main.h"
#include <stdio.h>

/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			sum1 += *a;
		}
		else
		{
			sum1 += *(a + i * size + i);
		}
	}
	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			sum2 += *(a + (size - 1));
		}
		else
		{
			sum2 += *(a + (i + 1) * (size - 1));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
