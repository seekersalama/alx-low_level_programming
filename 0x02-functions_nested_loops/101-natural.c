#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m;
	long accu;

	accu = 0;
	for (m = 1; m < 1024 ; m++)
	{
		if (m % 15 == 0)
			accu += m;
		else if (m % 5 == 0)
			accu += m;
		else if (m % 3 == 0)
			accu += m;
	}
	printf("%ld\n", accu);
	return (0);
}
