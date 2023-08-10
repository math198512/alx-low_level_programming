#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Text
 */
int main(void)
{
		char quote1[] = "and that piece of art is useful\"";
		char quote2[] = "Dora Korpar, 2015-10-19\n";

		fprintf(stderr, "%s - %s", quote1, quote2);
		return (1);
}
