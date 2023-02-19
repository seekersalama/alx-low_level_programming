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
	char n;
	char m;
	char p;
	char q;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '8'; m++)
		{
			putchar(n);
			putchar(m);
			putchar(' ');
			for (p = '0'; p <= '9'; p++)
			{
				for (q = '0'; q <= '9'; q++)
				{
				putchar(p);
				putchar(q);
				}
			}
			if (n == '9' && m == '8' && p == '9' && q == '9')
				break;
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
