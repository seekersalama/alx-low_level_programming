#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	float a, b, accu;
	int m;

	accu = 0;
	a = 0;
	b = 1;
	for (m = 1; m < 100 ; m++)
	{
		accu = a + b;
		printf("%1.0f, ", accu);
		a = b;
		b = accu;
	}
	printf("%1.0f\n", a + b);
	return (0);
}
