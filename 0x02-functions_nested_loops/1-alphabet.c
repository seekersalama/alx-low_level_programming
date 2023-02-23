#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	char *cin = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; cin[i] != '\0'; i++)
	{
		_putchar(cin[i]);
	}
	_putchar('\n');
}
