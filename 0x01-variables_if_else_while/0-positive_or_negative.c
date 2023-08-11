#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char *a = "is positive";
	char *b = "is zero";
	char *c = "is negative";

	printf("%d %s\n", n, n > 0 ? a : (n == 0 ? b : c));
	return (0);
}
