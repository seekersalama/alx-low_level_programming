#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	_putchar('\n');
	str = "123456789";
	puts_half(str);
	_putchar('\0');
	return (0);
}
