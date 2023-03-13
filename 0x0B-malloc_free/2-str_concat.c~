#include <stdlib.h>
/**
 * str_concat - prints buffer in hexa
 * @s1: char *
 * @s2: char *
 *
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	char *pt;
	unsigned int i, size, j;

	size = sizeof(s1) + sizeof(s2) - 1;
	if (size == 0)
		pt = NULL;
	else
		pt = malloc(sizeof(char) * size);
	if (pt != NULL)
	{
		for (i = 0; s1[i] != '\0'; i += 1)
			*(pt + i) = *(s1 + i);
		for (j = 0; s2[j] != '\0'; j += 1)
			*(pt + i + j) = *(s2 + j);
	}
	return (pt);
}
