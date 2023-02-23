/**
 * print_alphabet - Entry point
 * @c: input char to _putrchar
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

void print_alphabet(void)
{
	int i;
	char *cin = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; cin[i] != '\0'; i++)
	{
		_putchar(cin[i]);
	}
	_putchar('\n');
}
