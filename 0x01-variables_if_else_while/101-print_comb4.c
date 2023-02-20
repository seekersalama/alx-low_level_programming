#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the code
 * n: char  variable
 * m: char variable
 * p: char variable
 * Return: Always 0 for success
 */
int main(void)
{
	char n;
	char m;
	char p;

	for (n = '0'; n <= '7'; n++)
	{
		for (m = n + 1; m <= '8'; m++)
		{
			for (p = m + 1; p <= '9'; p++)
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n == '7' && m == '8' && p == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
