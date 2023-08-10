#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Text
 */
int main(void)
{
		int someInt;
		float someFloat;
		long int someLongInt;
		long long int someLongLongInt;
		char someChar;

		printf("Size of a char: %ld byte(s)\n", sizeof(someChar));
		printf("Size of an int: %ld byte(s)\n", sizeof(someInt));
		printf("Size of a long int: %ld byte(s)\n", sizeof(someLongInt));
		printf("Size of a long long int: %ld byte(s)\n", sizeof(someLongLongInt));
		printf("Size of a float: %ld byte(s)\n", sizeof(someFloat));
		return (0);
}
