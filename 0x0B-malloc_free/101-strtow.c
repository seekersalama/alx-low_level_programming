#include <stdio.h>
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
	int step, *index;
	step = -1;
	j = 0;
	index = (int *) malloc(sizeof(int) * 20);
	if (str != NULL || str[0] != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if(str[i] == ' ')
				if(str[i + 1] != ' ')
				{
					step++;
					*(index++) = i+1;
				}
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
