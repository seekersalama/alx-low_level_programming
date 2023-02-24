/**
 * more_numbers - check the code.
 * Return: product
 */
int _putchar(char c);
void more_numbers(void)
{
	char *number;
	int n, m;

	number = "01234567891011121314";
	for (m = 0; m < 10; m++)
	{
		for (n = 0; number[n] != '\0'; n++)
		{
			_putchar(number[n]);
		}
		_putchar('\n');
	}
}
