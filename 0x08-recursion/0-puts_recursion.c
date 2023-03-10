#include "main.h"
/**
 * _puts_recursion - check the code
 *@str: char *
 * Return: Always 0.
 */
void _puts_recursion(char *str)
{
	if (!(*str))
	{
		_putchar('\n');
	} else
	{
	_putchar(*str);
	_puts_recursion(str + 1);
	}
}
