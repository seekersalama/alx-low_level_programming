/**
 * print_diagonal - check the code.
 * @n: int input
 * @c: char input var
 * Return: void
 */
int _putchar(char c);
void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
		{
			for (p = 0; p < m; p++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
