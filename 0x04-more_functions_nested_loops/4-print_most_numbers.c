/**
 * print_most_numbers - check the code.
 * @c: char input to putchar
 * Return: product
 */
int _putchar(char c);
void print_most_numbers(void)
{
	char *number;
	int n;

	number = "01356789";
	for (n = 0; number[n] != '\0'; n++)
	{
		_putchar(number[n]);
	}
	_putchar('\n');
}
