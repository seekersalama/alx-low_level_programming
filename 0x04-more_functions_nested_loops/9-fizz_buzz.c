#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{

	int m;
	char *fizz = "Fizz";
	char *buzz = "Buzz";
	char *fizzbuzz = "FizzBuzz";

	for (m = 1; m < 100 ; m++)
	{
		if (m % 15 == 0)
			printf("%s ", fizzbuzz);
		else if (m % 5 == 0)
			printf("%s ", buzz);
		else if (m % 3 == 0)
			printf("%s ", fizz);
		else
			printf("%d ", m);
	}
	printf("%s", buzz);
	printf("\n");
	return (0);
}
