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

	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (n == '8' && m == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
