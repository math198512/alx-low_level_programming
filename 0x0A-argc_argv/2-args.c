#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
