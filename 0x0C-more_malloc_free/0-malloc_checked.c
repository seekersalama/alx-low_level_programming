#include <stdlib.h>
/**
 * malloc_checked - check the code
 *@b: unsigned int
 * Return: Always 0.
 */


void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
