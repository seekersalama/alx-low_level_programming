#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: input char to _putrchar
 * Return: the sum of two numer
 */
int _putchar(char n);
void print_times_table(int n)
{
	int i, j, p, q, p1, q1, t;

	for (i = 0; i <= n; i += 1)
	{
		if (n < 0 || n >= 15)
			break;
		for (j = 0; j <= n; j += 1)
		{
			if (n < 0 || n >= 15)
				break;
			t = i * j;
			p = t / 10;
			q = t % 10;
			p1 = t / 100;
			q1 = (t % 100) / 10;
			if (t >= 10 && t < 100)
			{
				_putchar (' ');
				_putchar (' ');
				_putchar (p + '0');
				_putchar (q + '0');
				if (j < n)
				{
					_putchar (',');
				}
			} else if (t >= 100 && t < 1000)
			{
				_putchar (' ');
				_putchar (p1 + '0');
				_putchar (q1 + '0');
				_putchar (q + '0');
				if (j < n)
				{
					_putchar (',');
				}
			} else
			{
				if (j == 0)
				{
					_putchar(t + '0');
					if (j < n)
					{
						_putchar (',');
					}
				} else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
					if (j < n)
					{
						_putchar (',');
					}
				}
			}
		}
		_putchar('\n');
		}
}
