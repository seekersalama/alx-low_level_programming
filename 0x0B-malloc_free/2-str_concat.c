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

	if (s1 != NULL && s2 != NULL)
	{
		size = sizeof(s1) + sizeof(s2) - 1;
		pt = malloc(sizeof(char) * size);
		if (pt != NULL)
		{
			for (i = 0; s1[i] != '\0'; i += 1)
				*(pt + i) = *(s1 + i);
			for (j = 0; s2[j] != '\0'; j += 1)
				*(pt + i + j) = *(s2 + j);
			*(pt + i + j) = '\0';
		}
	}
	else if (s1 != NULL)
	{
		size = sizeof(s1);
		pt = malloc(sizeof(char) * size);
		if (pt != NULL)
		{
			for (i = 0; s1[i] != '\0'; i += 1)
				*(pt + i) = *(s1 + i);
		}
		*(pt + i) = '\0';
	} else if (s2 != NULL)
	{
		size = sizeof(s2);
		pt = malloc(sizeof(char) * size);
		if (pt != NULL)
		{
			for (j = 0; s2[j] != '\0'; j += 1)
				*(pt + j) = *(s2 + j);
		}
		*(pt + j) = '\0';
	} else if (s1 == NULL && s2 == NULL)
	{
		size = 1;
		pt = malloc(sizeof(char) * size);
		if (pt != NULL)
			*(pt + size - 1) = '\0';
	}
	return (pt);
}
