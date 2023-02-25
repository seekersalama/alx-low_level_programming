/**
 * jack_bauer - Entry point
 * @c: input char to _putrchar
 * Return: Always 0 (Success)
 */
int _putchar(char c);

void jack_bauer(void)
{
	int j, i, p, q, ret;

	j =  i = p = q = 0;
	ret = 0;

	for (i = 0; i <= 2; i++)
	{
		if (ret != 0)
			break;

		for (j = 0; j <= 9; j++)
		{
			if (ret != 0)
				break;
			for (p = 0; p <= 5; p++)
			{
				if (ret != 0)
					break;
				for (q = 0; q <= 9; q++)
				{
					if (ret != 0)
						break;
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(p + '0');
					_putchar(q + '0');
					_putchar('\n');
					if (i == 2 &&  j == 3 && p == 5 &&  q == 9)
						ret = 1;
				}
			}
		}
	}
}
