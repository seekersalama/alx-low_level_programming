#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the code
 * n: char  variable
 * m: char variable
 * Return: Always 0 for success
 */
int main(void)
{
	int n;
	int m;
	int p;
	int q;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '8'; m++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				for (q = '0'; q <= '9'; q++)
				{
					if ((n == m) && (p == q) && (n == p))
						continue;
					if ((n == p) && (m == p))
						continue;
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(p);
					putchar(q);
					if (n == '9' && m == '8' && p == '9' && q == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
