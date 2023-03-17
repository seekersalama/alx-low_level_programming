#include <stdlib.h>
/**
 * _calloc - check the code
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	pt = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = (char *) malloc(nmemb * size * sizeof(char));
	if (pt != NULL)
	{
		for (i = 0; i < nmemb * size - 1; i++)
			*(pt + i) = 0x00;
	}
	return (pt);
}
