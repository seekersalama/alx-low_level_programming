#include "main.h"
/**
* puts_half - check the code
*@str: char * input pointer
* Return: Always 0.
*/
void puts_half(char *str)
{
	int length, len;

	if (_strlen(str) % 2)
		len = (_strlen(str) - 1) / 2;
	else
		len = _strlen(str) / 2;

	for (length = len; str[length] != '\0'; length += 1)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}


/**
* _strlen - check the code
*@s: char * input pointer
* Return: Always 0.
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
