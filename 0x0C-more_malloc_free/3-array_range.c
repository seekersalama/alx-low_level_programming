#include <stdlib.h>
/**
 * array_range - check the code
 *@min: int
 *@max: int
 *Return: int *
 */
int *array_range(int min, int max)
{
	int *pt, i;

	pt = NULL;
	if (min > max)
		return (NULL);
	pt = (int *) malloc(sizeof(*pt) * (max - min + 1));
	if (pt != NULL)
	{
		for (i = 0; i <= (max - min); i++)
			*(pt + i) = min +  i;
	}
	return (pt);
}
