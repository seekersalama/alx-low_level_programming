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

	n = 'a';
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
