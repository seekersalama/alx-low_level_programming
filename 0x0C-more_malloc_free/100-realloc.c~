#include <stdlib.h>
/**
 * _realloc - check the code
 *@ptr: void *
 *@old_size: unsigned int
 *@new_size: unsigned int
 *Return: int *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	if(new_size == old_size)
		return NULL;
	if(new_size > old_size)
	{
		nptr = malloc(new_size);
	}
	if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return NULL;
	}
}
