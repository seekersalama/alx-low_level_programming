
#include <stdlib.h>
/**
 * strtow - prints buffer
 * @str: char *
 * Return: char **
 */

char **strtow(char *str)
{
	char **pt;
	int i, j;
	int step;
	step = 0;
	if (str != NULL || str != "")
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if(str[i] == ' ')
				if(str[i + 1] != ' ')
					step++;
		}
	}
	else
		return (NULL);
	return (pt);
}
