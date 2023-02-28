#include "main.h"
/**
* puts2 - check the code
*@str: char * input pointer
* Return: Always 0.
*/

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length += 2)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
