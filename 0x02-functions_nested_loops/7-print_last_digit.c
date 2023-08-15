#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the integer inputted to the function.
 * * Return: the last digit of a numebr n.
 */
int print_last_digit(int n)
{
	int last;
	
	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
