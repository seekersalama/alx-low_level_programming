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
	(void) argv;
	_putchar(argc - 1 + '0');
	_putchar('\n');
	return (0);
}