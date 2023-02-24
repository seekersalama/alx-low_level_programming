/**
 * print_line - check the code.
 * @c: char input variable
 * Return: product
 */
int _putchar(char c);
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
