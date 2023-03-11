#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
*@argc: int input to main
*@argv: char ** input to main
 * Return: Always 0 (Success)
 */



int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = strtoint(argv[1]);
		j = strtoint(argv[2]);
		printf("%d", i * j);
		printf("\n");
		return (0);
	}

}


/**
 * strtoint_n - Entry point
 *@str: char*
 *@n: int
 * Return: Always 0 (Success)
 */

int strtoint_n(char *str, int n)
{
	int sign = 1;
	int place = 1;
	int ret = 0;
	int i;

	for (i = n - 1; i >= 0; i--, place *= 10)
	{
		int c = str[i];

		switch (c)
		{
			case '-':
				if (i == 0)
					sign = -1;
				else
					return (-1);
				break;
			default:
				if (c >= '0' && c <= '9')
					ret += (c - '0') * place;
				else
					return (-1);
		}
	}
	return (sign * ret);
}


/**
 * strtoint - Entry point
 *@str: char*
 * Return: Always 0 (Success)
 */
int strtoint(char *str)
{
	char *temp = str;
	int n = 0;

	while (*temp != '\0')
	{
		n++;
		temp++;
	}
	return (strtoint_n(str, n));
}
