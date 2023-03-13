#include <stdlib.h>
/**
 * _strdup - prints buffer in hexa
 * @str: char
 *
 * Return: char *
 */
char *_strdup(char *str)
{
	char *pt;
	unsigned int i, size;

	size = sizeof(str);
	if (size == 0)
		pt = NULL;
	else
		pt = malloc(sizeof(char) * size);
	if (pt != NULL)
	{
		for (i = 0; i < size; i += 1)
			*(pt + i) = *(str + i);
	}
	return (pt);
}
