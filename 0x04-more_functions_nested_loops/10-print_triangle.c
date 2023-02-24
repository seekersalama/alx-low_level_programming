/**
 * print_triangle - check the code.
 * @c: char input
 * Return: void
 */
int _putchar(char c);
void print_triangle(int size)
{
	int m, p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < size; m++)
		{
			for (p = 1; p < size - m; p++)
				_putchar(' ');
			for (p = 0; p <= m; p++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
