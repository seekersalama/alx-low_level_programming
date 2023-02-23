#include  "main.h"

/**
 * main - check the code.
 * @c : char input to puchar
 * Return: Always 0.
 */

int _isalpha(int c);
int _putchar(char c1);

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
