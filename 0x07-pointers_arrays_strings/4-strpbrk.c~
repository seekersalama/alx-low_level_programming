#include <stddef.h>
/**
 * _strpbrk - prints buffer in hexa
 * @s: char * the address of memory to print
 * @b: char * the size of the memory to print
 * Return: char
 */

char *_strpbrk(char *s, char *b)
{
	char *t;
	int i, j;

	t = NULL;
	for (i = 0; s[i] != '\0'; i += 1)
	{
		for (j = 0; b[j] != '\0'; j += 1)
		{
			if (s[i] == b[j])
				t = s + i;
		}
		if (t != NULL)
			break;
	}
	return (t);
}
