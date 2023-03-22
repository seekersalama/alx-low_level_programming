#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - prints buffer
 * @str: char *
 * Return: char **
 */

char **strtow(char *str)
{
	char *pt, *temp;
	int i;

	for (i = 0; str[i] != '\0'; i += 1)
		size++;
	pt = malloc(size + 1);
	if (pt != NULL)
	{
		for (i = 0; str[i] != '\0'; i += 1)
		{
			*(pt + i) = *(str + i);
			if (*(str + i) == ' ')
				i += 1;
		}
		*(pt + i) = '\0';
	}
}
