/**
 * print_numbers - check the code.
 * @n: char input to _putchar
 * Return: product
 */
int _putchar(char c);
void print_numbers(void)
{
	 char *number;
	 int n;

	number = "0123456789";
	for (n = 0; number[n] != '\0'; n++)
	{
		_putchar(number[n]);
	}
	_putchar('\n');
}
