/**
 * print_square - check the code.
 * @c: char input
 * Return: void
 */
int _putchar(char c);
void print_square(int size)
{
	int m;
	int p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < size; m++)
		{
			for (p = 0; p < size; p++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
