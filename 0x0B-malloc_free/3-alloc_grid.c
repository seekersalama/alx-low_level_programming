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
	int **ptt;

	if (width <= 0 || height <= 0)
	{
		ptt = NULL;
	}
	else
		ptt = malloc(width * sizeof(*ptt));
	if (ptt != NULL)
	{
		for (i = 0; i < width; i += 1)
			ptt[i] = malloc(height * sizeof(*ptt[i]));
	}

	for (i = 0; i < width; i += 1)
	{
		for (j = 0; j < height; j += 1)
		{
			ptt[i][j] = 0;
		}
	}
	return (ptt);
}
