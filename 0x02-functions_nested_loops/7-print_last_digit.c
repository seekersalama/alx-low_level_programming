
/**
 * print_last_digit - Entry point
 * @c: input char to _putrchar
 * Return: Always 0 (Success)
 */
int _putchar(char c);

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i >= 0)
	{
		_putchar(i + '0');
	} else
	{
		i = -i;
		_putchar(i + '0');
	}
	return (i);
}
