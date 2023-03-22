#include "function_pointers.h"
/**
 * print_name - check the code
 *@name: char *
 *@f: void
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
