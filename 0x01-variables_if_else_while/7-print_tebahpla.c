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

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
