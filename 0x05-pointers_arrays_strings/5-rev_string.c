#include "main.h"

/**
 * rev_string - check the code
 *@str:char * input pointer
 * Return: Always 0.
 */

void rev_string(char *str)
{
	int length;
	char temp;
	int i;

	length = _strlen(str);

	for (i = 1; i <= length / 2; i++)
	{
		if (length % 2)
		{
			temp = str[length / 2 - i];
			str[length / 2 - i] = str[length / 2 + i];
			str[length / 2 + i] = temp;
		} else
		{
			temp = str[length / 2 - i - 1];
			str[length / 2 - i - 1] = str[length / 2 + i];
			str[length / 2 + i] = temp;
		}
	}
}

/**
 * _strlen - check the code
 *@s: char * input pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
