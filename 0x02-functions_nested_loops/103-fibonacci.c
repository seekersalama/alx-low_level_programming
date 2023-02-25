#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, accu, accu1;
	int m;

	accu = 0;
	accu1 = 0;
	a = 0;
	b = 1;
	for (m = 1; m < 33 ; m++)
	{
		accu = a + b;
		if (accu % 2 == 0)
			accu1 += accu;
		a = b;
		b = accu;
	}
	printf("%ld\n", accu1);
	return (0);
}
