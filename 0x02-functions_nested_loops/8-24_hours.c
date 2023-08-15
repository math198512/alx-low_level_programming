#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * * Return: 0, success.
 */
void jack_bauer(void)
{
	int a, b;
	int i;
	int j;
	int k;
	int l;

	for (a = 0; a <= 23 ; a++)
	{
		i = a / 10;
		j = a % 10;
		for (b = 0; b <= 59 ; b++)
                {
                        k = b / 10;
                        l = b % 10;
                        /**
			 *  if (i <= k || (i == k && j < l))
			 *  {
			 */
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
                        
                }
        }
}
