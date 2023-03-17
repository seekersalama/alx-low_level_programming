#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check the code
 *@nmemb: unsigned int
 *@size: unsigned int
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pt;
	unsigned int i, j;

	j = 0;
	pt = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			*(pt + 1) = j;
		}
	}
	return ((void *) pt);
}
