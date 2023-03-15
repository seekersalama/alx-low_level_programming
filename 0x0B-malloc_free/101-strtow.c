#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - prints buffer
 * @str: char *
 * Return: char **
 */

char **strtow(char *str)
{
	char **pt; *temp;
	int i, j;
	int step, *index;
	step = -1;
	index = (int *) malloc(sizeof(int));
	if (str != NULL || str[0] != '\0')
	{
		for (i = 0, j = 1; str[i] != '\0'; i++, j++)
		{
			temp = "\0";
			*(pt + i) = malloc(step * sizeof(char* ));
			if (str[i] == ' ' && str[j] != ' ' )
			{
				for (t = 0; str[j] != ' '; t++, j++, i++)
				{
					*(temp + t) = str[t];
				}
				*(temp + t) = '\n';
			}
			*(pt + i) = temp;
		}
		printf("%d\n", step);
		pt = malloc(step * sizeof(char* ));
		for (i = 0; i < step; i += 1)
		{
		}
	}
	else
		return (NULL);
	return (pt);
}
