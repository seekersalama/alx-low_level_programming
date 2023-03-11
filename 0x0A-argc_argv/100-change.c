#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *@argc: int input to main
 *@argv: char ** input to main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int change, accu, rem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	accu  = 0;
	rem = 0;
	change = atoi(argv[1]);
	if (change < 0)
		printf("0\n");
	if (change / 25 > 0)
	{
		accu = change / 25;
		rem = change % 25;
	} else
		rem = change % 25;
	if (rem > 0)
	{
		accu += rem / 10;
		rem = rem % 10;
	}
	if (rem > 0)
	{
		accu += rem / 5;
		rem = rem % 5;
	}
	if (rem > 0)
	{
		accu += rem / 2;
		rem = rem % 2;
	}
	if (rem > 0)
	{
		accu += rem / 1;
		rem = rem % 1;
	}
	printf("%d\n", accu);
	return (0);
}

