#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the code
 * n: char  variable
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
