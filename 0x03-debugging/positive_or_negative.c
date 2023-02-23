#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *positive_or_negative - Entry point of the code
 * n: interger variable
 *
 * Return: Always 0 for success
 */
void positive_or_negative (int n)
{
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
