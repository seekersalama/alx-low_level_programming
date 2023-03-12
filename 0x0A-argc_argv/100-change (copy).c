#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: int input to main
 *@argv: char ** input to main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int change;
	int accu;
	int rem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	accu  = 0;
	rem = 0;
	change = atoi(argv[1]);
	int array[5] = {25, 10, 5, 2, 1}
		if (change < 0)
		printf("0\n");
	for (i = 0; i < 5; i += 1)
	{
		if (change / array[i] > 0)
			{
				accu = change / array[i];
				rem = change % array[i];
			} else
					rem = change % array[i];
					change = rem;
	}

	printf("%d\n", accu);
	return (0);
}
