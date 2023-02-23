#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int n;
	char *cin = "abcdefghijklmnopqrstuvwxyz";

	for (n = 0; n < 10; n++)
	{
		for (i = 0; cin[i] != '\0'; i++)
		{
			_putchar(cin[i]);
		}
		_putchar('\n');
	}
}
