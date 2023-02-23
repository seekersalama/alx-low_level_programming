/**
 * print_sign - Entry point
 * @c: int input
 * Return: Always 0 (Success)
 */

int _putchar(char c);

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ret = 0;
		_putchar('0');
	}
	else
	{
		ret = -1;
		_putchar('-');
	}
	return (ret);
}
