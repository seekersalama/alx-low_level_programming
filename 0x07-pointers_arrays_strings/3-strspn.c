/**
 * _strspn - prints buffer in hexa
 * @s: char *the address of memory to print
 * @b: char the size of the memory to print
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *b)
{
	unsigned int t;
	int i, j;

	t = 0;
	for (i = 0; s[i] != '\0'; i += 1)
	{
		for (j = 0; b[j] != '\0'; j += 1)
		{
			if (s[i] == b[j])
				++t;
		}
		if (t != 0 && s[i] == ' ')
			break;
	}
	if(b = )
	return (t);
}
