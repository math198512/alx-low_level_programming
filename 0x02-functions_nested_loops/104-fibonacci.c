#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0.
 */

int fibo(int n)
{
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibo(n-2) + fibo(n-1);
    }
}

int main(void)
{
	int i, n = 98;
	for (i = 0 ; i <= n; i++)
	{
		printf(", %d", fibo(n));
	}
	printf("\n");
	return (0);
}
