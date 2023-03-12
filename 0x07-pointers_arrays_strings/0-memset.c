/**
 * _memset - prints buffer in hexa
 * @s: char *the address of memory to print
 * @b: char the size of the memory to print
 *@n: unsigned int
 * Return: char *q
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i += 1)
	{
		*(s + i) = b;
	}
	return (s);
}
