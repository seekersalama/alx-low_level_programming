#include "main.h"

/**
 * _puts - check the code
 *@str: char * input pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
