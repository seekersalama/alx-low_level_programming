#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - prints buffer in hexa
 * @grid: int **
 * @height: int
 *
 * Return: int **
 */

void free_grid(int **grid, int height)
{
	int i;

	(void) height;
	if (grid != NULL)
	{
		for (i = 0; i < height - 1; i += 1)
		{
			free(*(grid + i));
		}
	}
}
