/**
* free_grid - prints buffer in hexa
* @grid: int **
* @height: int
*
* Return: int **
*/

void free_grid(int **grid, int height)
{
int i, j;

if (ptt != NULL)
	{
		for (i = 0; i < width; i += 1)
		{
			ptt[i] = malloc(height * sizeof(int));
			if (!ptt[i])
				return NULL;
			}
			for (i = 0; i < width; i += 1)
			{
				for (j = 0; j < height; j += 1)
				{
					ptt[i][j] = 0;
				}
			}
		}
}
