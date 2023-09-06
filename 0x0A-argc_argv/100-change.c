#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 1 if there is an error; else returns 0
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%i\n", 0);
		return (0);
	}
	cents = atoi(argv[1]);
	coins = cents / 25;
	cents -= (cents / 25) * 25;
	coins += cents / 10;
	cents -= (cents / 10) * 10;
	coins += cents / 5;
	cents -= (cents / 5) * 5;
	coins += cents / 2;
	cents -= (cents / 2) * 2;
	coins += cents;
	printf("%d\n", coins);
	return (0);
}
