#include <stddef.h>
/**
 * _strstr - prints buffer in hexa
 * @s: char * the address of memory to print
 * @b: char * the size of the memory to print
 * Return: char
 */

char *_strstr(char *s, char *b)
{
	char *t;
	int i, j, n;

	n = 0;
	t = NULL;
	for (i = 0; s[i] != '\0'; i += 1)
	{
		if (s[i] == b[0])
			{
			*t = s[i];
			for (j = 1; b[j] != '\0'; j += 1)
			{
				if (s[i + j] == b[j])
					*(t + j) = s[i +j];
				else
				{
					n = 0;
					t = NULL;
					break;
				}

			}
		}
		else if (t = b && n > 0)
		{

		}
	}
	return (t);
}
