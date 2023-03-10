#include <stdlib.h>
/**
 * argstostr - prints buffer
 * @ac: int
 * @av: char **
 * Return: char *
 */

char *argstostr(int ac, char **av)
{
	char *pt;
	unsigned int i, j;
	int step;

	step = 0;
	if (ac != 0 && av != NULL)
	{
		if (ac == 1)
			ac = 2;
		pt = (char *) malloc(sizeof(char *) * (ac - 1) - 4);
		if (pt != NULL)
		{
			for (i = 0; av[i] != NULL; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++)
					*(pt + step++) = av[i][j];
				if (av[i][j] == '\0')
					*(pt + step++) = '\n';
			}
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (pt);
}
