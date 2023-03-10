#include "main.h"
/**
 * _print_rev_recursion - check the code
 *@str: char *
 * Return: Always 0.
 */
void _print_rev_recursion(char *str)

{
	if (!(*str))
	{
		return;
	}
	_print_rev_recursion(str + 1);
	_putchar(*str);
}
