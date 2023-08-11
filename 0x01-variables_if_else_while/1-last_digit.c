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
	char *a;
	char *b;
	char *c;
	char *d;
	char *e;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = " and is greater than 5";
	b = " and is 0";
	c = " and is less than 6 and not 0";
	d = "Last digit of ";
	e = n % 10 > 5 ? a : (n % 10 == 0 ? b : c);
	printf("%s%d is %d%s\n", d, n, n % 10, e);
	return (0);
}
