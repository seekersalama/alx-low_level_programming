#include <stdio.h>
/**
 * times_table - Entry point
 * @n: input char to _putrchar
 * Return: the sum of two numer
 */

int _putchar(char n);
void times_table(void)
{
	int i, j, p, q, t;

	for (i = 0; i <= 9; i += 1)
	{
		for (j = 0; j <= 9; j += 1)
		{
			t = i * j;
			p = (i * j) / 10;
			q = (i * j) % 10;
			if (t >= 10)
			{
				_putchar (' ');
				_putchar (p + '0');
				_putchar (q + '0');
				_putchar (',');
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}

}
