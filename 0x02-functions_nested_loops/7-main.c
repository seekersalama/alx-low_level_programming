#include  "main.h"

/**
 * main - check the code
 * @n: input to function
 * Return: Always 0.
 */

int print_last_digit(int n);
int _putchar(char);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
