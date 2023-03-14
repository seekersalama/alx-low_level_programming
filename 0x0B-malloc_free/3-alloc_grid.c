#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - prints buffer in hexa
 * @width: int
 * @height: int
 *
 * Return: int **
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int sig;
	int **ptt;

	sig = 0;
	if (width <= 0 || height <= 0)
	{
		ptt = NULL;
		sig++;
	}
	else
	{
		ptt = malloc(width * sizeof(*ptt));
		if(!ptt)
			sig++;
	}
	if (ptt != NULL)
	{
		for (i = 0; i < width; i += 1)
		{
			ptt[i] = malloc(height * sizeof(*ptt[i]));
			if(!ptt[i])
				sig++;
		}
		for (i = 0; i < width; i += 1)
		{
			for (j = 0; j < height; j += 1)
			{
				if(&ptt[i][j] != NULL)
					ptt[i][j] = 0;
			}
		}
	}
	if(sig)
	{
		free(ptt);
		ptt = NULL;
	}
	return (ptt);
}
