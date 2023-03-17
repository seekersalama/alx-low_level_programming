#include <stdlib.h>
/**
 * _calloc - check the code
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int i;

	pt = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size == sizeof(char))
	{
		char *pt = (char *) malloc(nmemb * size + 1);
		if (pt != NULL)
		{
			for (i = 0; i <= nmemb * size - 1; i++)
				*(pt + i) = 0x00;
		}
		else
		return (NULL);
	}
	if (size == sizeof(int))
	{
		int *pt = (int *) malloc(nmemb * size);
		if (pt != NULL)
		{
			for (i = 0; i <= nmemb * size - 1; i++)
				*(pt + i) = 0;
		}
		else
		return (NULL);
	}
	return (pt);
}
