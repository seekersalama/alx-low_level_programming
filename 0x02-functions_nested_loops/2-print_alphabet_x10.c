/**
 * print_alphabet_x10 - Entry point
 * @c: input char to _putrchar
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

void print_alphabet_x10(void)
{
	int i;
	int n;
	char *cin = "abcdefghijklmnopqrstuvwxyz";

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; cin[i] != '\0'; i++)
		{
			_putchar(cin[i]);
		}
		_putchar('\n');
	}
}
