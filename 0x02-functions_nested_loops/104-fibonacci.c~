#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a, b, accu;
	int m;

	accu = 0;
	a = 0;
	b = 1;
	for (m = 1; m < 98 ; m++)
	{
		accu = a + b;
		printf("%lu, ", accu);
		a = b;
		b = accu;
	}
	printf("%lu\n", a + b);
	return (0);
}
