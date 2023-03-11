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
	int i;

	for (i = 0; i < argc; i += 1)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
