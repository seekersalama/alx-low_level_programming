#include  "main.h"

/**
 * main - check the code.
 * @c : char input to puchar
 * Return: Always 0.
 */

int _abs(int c);
int _putchar(char c1);


int main(void)
	{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
	}
