#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: input char to _putrchar
 * Return: the sum of two numer
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i += 1)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	} else if (n > 98)
	{
		for (i = n; i > 98; i -= 1)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	} else
	{
		printf("%d\n", 98);
	}
}
