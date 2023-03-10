#include "main.h"
/**
 * _strlen_recursion - check the code
 *@str: char *
 * Return: Always 0.
 */

int _strlen_recursion(char *str)
{

	if (!(*str))
		return (0);

	return ((_strlen_recursion(str + 1)) + 1);


}
