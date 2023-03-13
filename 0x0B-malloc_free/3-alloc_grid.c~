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
	int (*ptt)[height] = malloc(sizeof(int[width][height]));

	if (!(width <= 0 || height <= 0))
	{
		printf("first if\n");
		ptt = NULL;
	}
	if (ptt != NULL)
	{
		printf("second if\n");
		for (i = 0; i < width; i += 1)
			for (j = 0; j < height; j += 1)
				ptt[i][j] = 0;
	}
	return (ptt);
}
